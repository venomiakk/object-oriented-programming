//
// Created by student on 28.05.23.
//

#include "model/Repair.h"
#include "model/Client.h"
#include "model/Service.h"
#include "exceptions/RepairExceptions.h"

Repair::Repair(int repairId, const string &startDate, const ClientPtr &client, const ServicePtr &service) : repairID(
        repairId), startDate(startDate), client(client), service(service) {
    if (repairId<1) throw RepairExceptions(RepairExceptions::exceptionID);
    if (startDate.empty()) throw RepairExceptions(RepairExceptions::exceptionStartDate);
    if (client== nullptr) throw RepairExceptions(RepairExceptions::exceptionClient);
    if (service== nullptr) throw RepairExceptions(RepairExceptions::exceptionService);
}

Repair::~Repair() {

}

void Repair::setEndDate(const string &endDate) {
    if (endDate.empty()) throw RepairExceptions(RepairExceptions::exceptionEndDate);
    Repair::endDate = endDate;
}

int Repair::getRepairId() const {
    return repairID;
}

const string &Repair::getStartDate() const {
    return startDate;
}

const ClientPtr &Repair::getClient() const {
    return client;
}

const ServicePtr &Repair::getService() const {
    return service;
}

const string &Repair::getEndDate() const {
    return endDate;
}

string Repair::getRepairInfo() {
    //todo service info
    return "Repair | id: "+ to_string(getRepairId())+" start date: "+getStartDate()+" end date: "+getEndDate()
    +"\n  Client | " + getClient()->getClientInfo()
    +"\n  Service | "+ getService()->getServiceInfo()+"\n";
}
