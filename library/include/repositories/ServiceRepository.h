//
// Created by student on 28.05.23.
//

#ifndef COMPUTERSERVICE_SERVICEREPOSITORY_H
#define COMPUTERSERVICE_SERVICEREPOSITORY_H
#include <vector>
#include <iostream>
#include "typedefs.h"
#include "repositories/Repository.h"

class ServiceRepository :public Repository<Service>{
    std::vector<ServicePtr> serviceStorage;
public:
    bool add(const ServicePtr&) override;
    void rm(const ServicePtr&) override;
    const ServicePtr& get(const int&)const override;
    string report() const override;
    const vector<ServicePtr>& getStorage() const override;
};


#endif //COMPUTERSERVICE_SERVICEREPOSITORY_H
