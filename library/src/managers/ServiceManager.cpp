//
// Created by student on 28.05.23.
//

#include "managers/ServiceManager.h"
#include <string>
#include "repositories/ServiceRepository.h"
#include "model/Service.h"

ServiceManager::ServiceManager() : servicesRepo(new ServiceRepository) {}

ServiceManager::~ServiceManager() {

}

ServicePtr ServiceManager::addService(const ServicePtr &service) {
    if (service != nullptr){
        servicesRepo->add(service);
        return getService(service->getServiceId());
    }
    return getService(service->getServiceId());

}

void ServiceManager::removeService(const ServicePtr &service) {
    if (service!= nullptr){
        if (getService(service->getServiceId())){servicesRepo->rm(service);}
    }
}

ServicePtr ServiceManager::getService(const int &id) {
    return servicesRepo->get(id);
}

int ServiceManager::getNumberOfServices() const {
    return servicesRepo->getStorage().size();
}

string ServiceManager::getServicesReport() const {
    return servicesRepo->report();
}
//
//ServicePtr ServiceManager::addService(int serviceId, float price, const string &type, const string &description) const {
//    if (getService(serviceId)!= nullptr){
//        return getService(serviceId);
//    }
//    ServicePtr service = make_shared<Service>(serviceId, price, type, description);
//    servicesRepo->add(service);
//    return getService(serviceId);
//}
//
//void ServiceManager::removeService(ServicePtr service) const {
//    if (service!= nullptr){
//        if (getService(service->getServiceId())){servicesRepo->rm(service);}
//    }
//}
//
//ServicePtr ServiceManager::getService(int serviceId) const {
//    return servicesRepo->findById(serviceId);
//}
//
//int ServiceManager::getNumberOfServices() const {
//    return servicesRepo->size();
//}
//
//string ServiceManager::getServicesReport() const {
//    return servicesRepo->report();
//}
