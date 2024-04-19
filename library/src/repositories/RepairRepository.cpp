//
// Created by student on 28.05.23.
//

#include "repositories/RepairRepository.h"
#include <string>
#include "exceptions/RepairRepositoryExceptions.h"
#include <algorithm>
#include "model/Repair.h"

bool RepairRepository::add(const RepairPtr &repair) {
    if (repair== nullptr){
        throw RepairRepositoryExceptions(RepairRepositoryExceptions::exceptionAdd);
    } else{
        repairsStorage.push_back(repair);
        return true;
    }
}

/*RepairPtr RepairRepository::get(const int index) {
    if (index < 0 || index > repairsStorage.size()){
        throw RepairRepositoryExceptions(RepairRepositoryExceptions::exceptionGet);
    }
    return repairsStorage[index];
}*/

void RepairRepository::rm(const RepairPtr &repair) {
    if (repair== nullptr){
        throw RepairRepositoryExceptions(RepairRepositoryExceptions::exceptionRm1);
    }
    if (find(repairsStorage.begin(), repairsStorage.end(),repair)==repairsStorage.end()){
        throw RepairRepositoryExceptions(RepairRepositoryExceptions::exceptionRm2);
    }
    repairsStorage.erase(remove(repairsStorage.begin(), repairsStorage.end(),repair),repairsStorage.end());
}

string RepairRepository::report() const {
    string value;
    for (auto & i : repairsStorage) {
        value+=i->getRepairInfo()+"\n";
    }
    return value;
}

/*
int RepairRepository::size() {
    return repairsStorage.size();
}
*/

/*RepairPtr RepairRepository::findById(int id) {
    for (auto & i : repairsStorage) {
        if (i->getRepairId()==id){return i;}
    }
    return nullptr;
}*/
const RepairPtr &RepairRepository::get(const int &id) const {
    for (auto & i : repairsStorage) {
        if (i->getRepairId()==id){return i;}
    }
    throw RepairRepositoryExceptions(RepairRepositoryExceptions::exceptionRm2);
}

const vector<RepairPtr> &RepairRepository::getStorage() const {
    return repairsStorage;
}
