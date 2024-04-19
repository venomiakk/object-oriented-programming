//
// Created by student on 28.05.23.
//

#ifndef COMPUTERSERVICE_HARDWARE_H
#define COMPUTERSERVICE_HARDWARE_H
#include <iostream>
#include "typedefs.h"
#include "model/Service.h"

class Hardware: public Service{
    string parts;
public:
//    Hardware(const std::string &descryption, const std::string &type, float price);
    Hardware(float price, const string &type, const string &description, int serviceId, const string &parts);

    std::string getActualType() override;

    std::string getActualDescription() override;

    float getActualPrice() override;

    string getServiceInfo() override;

    virtual ~Hardware();

    const string &getParts() const;
};


#endif //COMPUTERSERVICE_HARDWARE_H
