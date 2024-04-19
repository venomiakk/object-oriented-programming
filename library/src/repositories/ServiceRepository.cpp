//
// Created by student on 28.05.23.
//

#include "repositories/ServiceRepository.h"
#include <string>
#include "model/Service.h"
#include "exceptions/ServiceRepositoryExceptions.h"
#include <algorithm>
//
//bool ServiceRepository::add(ServicePtr service) {
//    if (service== nullptr){
//        throw ServiceRepositoryExceptions(ServiceRepositoryExceptions::exceptionAdd);
//    } else{
//        serviceStorage.push_back(service);
//        return true;
//    }
//}
//
//ServicePtr ServiceRepository::get(int index) {
//    if (index <0 || index > serviceStorage.size()){
//        throw ServiceRepositoryExceptions(ServiceRepositoryExceptions::exceptionGet);
//    }
//    return serviceStorage[index];
//}
//
//void ServiceRepository::rm(ServicePtr service) {
//    if (service== nullptr){
//        throw ServiceRepositoryExceptions(ServiceRepositoryExceptions::exceptionRm1);
//    }
//    if (find(serviceStorage.begin(), serviceStorage.end(), service) == serviceStorage.end()){
//        throw ServiceRepositoryExceptions(ServiceRepositoryExceptions::exceptionRm2);
//    }
//    serviceStorage.erase(remove(serviceStorage.begin(), serviceStorage.end(), service), serviceStorage.end());
//}
//
//string ServiceRepository::report() {
//    string value;
//    for (auto & i : serviceStorage) {
//        value+=i->getServiceInfo()+"\n";
//    }
//    return value;
//}
//
//int ServiceRepository::size() {
//    return serviceStorage.size();
//}
//
//ServicePtr ServiceRepository::findById(int id) {
//    for (auto & i : serviceStorage) {
//        if (i->getServiceId()==id){return i;}
//    }
//    return nullptr;
//}
bool ServiceRepository::add(const ServicePtr &service) {
    if (service== nullptr){
        throw ServiceRepositoryExceptions(ServiceRepositoryExceptions::exceptionAdd);
    } else{
        serviceStorage.push_back(service);
        return true;
    }
}

void ServiceRepository::rm(const ServicePtr &service) {
    if (service== nullptr){
        throw ServiceRepositoryExceptions(ServiceRepositoryExceptions::exceptionRm1);
    }
    if (find(serviceStorage.begin(), serviceStorage.end(), service) == serviceStorage.end()){
        throw ServiceRepositoryExceptions(ServiceRepositoryExceptions::exceptionRm2);
    }
    serviceStorage.erase(remove(serviceStorage.begin(), serviceStorage.end(), service), serviceStorage.end());
}

//zamian findByID na get
const ServicePtr &ServiceRepository::get(const int &id) const {
    for (auto & i : serviceStorage) {
        if (i->getServiceId()==id){return i;}
    }
    throw ServiceRepositoryExceptions(ServiceRepositoryExceptions::exceptionRm2);
}

string ServiceRepository::report() const {
    string value;
    for (auto & i : serviceStorage) {
        value+=i->getServiceInfo()+"\n";
    }
    return value;
}

const vector<ServicePtr> &ServiceRepository::getStorage() const {
    return serviceStorage;
}
