//
// Created by student on 28.05.23.
//

#ifndef COMPUTERSERVICE_SERVICEMANAGER_H
#define COMPUTERSERVICE_SERVICEMANAGER_H

#include <memory>
#include <vector>
#include "typedefs.h"
#include "repositories/ServiceRepository.h"

class ServiceManager {
private:
    ServiceRepoPtr servicesRepo;
public:
    explicit ServiceManager();

    virtual ~ServiceManager();

//    ServicePtr addService(int serviceId, float price, const string &type, const string &description) const;
//    void removeService(ServicePtr service) const;
//    ServicePtr getService(int serviceId) const;
//
//    int getNumberOfServices() const;
//    string getServicesReport() const;
    ServicePtr addService(const ServicePtr&);
    void removeService(const ServicePtr&);
    ServicePtr getService(const int&);
    int getNumberOfServices() const;
    string getServicesReport() const;
};


#endif //COMPUTERSERVICE_SERVICEMANAGER_H
