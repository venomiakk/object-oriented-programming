//
// Created by student on 28.05.23.
//

#include "managers/RepairManager.h"
#include <string>
#include "model/Repair.h"
#include "repositories/RepairRepository.h"
#include <memory>

RepairManager::RepairManager() : currentRepairs(new RepairRepository), archiveRepairs(new RepairRepository){}

RepairManager::~RepairManager() {

}

void RepairManager::archiveRepair(RepairPtr repair, string endDate) const {
    if(repair != nullptr)
    {
        if (getCurrentRepair(repair->getRepairId())){
            RepairPtr r = getCurrentRepair(repair->getRepairId());
            r->setEndDate(endDate);
            archiveRepairs->add(r);
            currentRepairs->rm(r);
        }
    }
}

RepairPtr RepairManager::getCurrentRepair(int id) const {
    return currentRepairs->get(id);
    //return nullptr gdy niema
}

RepairPtr
RepairManager::addRepair(int repairId, const string &startDate, const ClientPtr &client, const ServicePtr &service) {
//    if (getCurrentRepair(repairId)!= nullptr){
//        return getCurrentRepair(repairId);
//    } else if (getArchiveRepair(repairId)!= nullptr){
//        return getArchiveRepair(repairId);
//    }
    RepairPtr repair = make_shared<Repair>(repairId,startDate,client,service);
    currentRepairs->add(repair);
    return getCurrentRepair(repairId);
}

RepairPtr RepairManager::getArchiveRepair(int id) const {
    return archiveRepairs->get(id);
}

int RepairManager::getNumberOfCurrentRepairs() const {
    return currentRepairs->getStorage().size();
//    return currentRepairs->size();
}

int RepairManager::getNumberOfArchiveRepairs() const {
    return archiveRepairs->getStorage().size();
}

string RepairManager::getCurrentRepairsReport() const {
    return currentRepairs->report();
}

string RepairManager::getArchiveRepairsReport() const {
    return archiveRepairs->report();
}

string RepairManager::getAllRepairsReport() const {
    return "Current repairs:\n"
    +getCurrentRepairsReport()+"\n"
    +"Archive repairs:\n"
    +getArchiveRepairsReport()+"\n";
}
