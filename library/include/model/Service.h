//
// Created by student on 28.05.23.
//

#ifndef COMPUTERSERVICE_SERVICE_H
#define COMPUTERSERVICE_SERVICE_H
#include <iostream>
#include "typedefs.h"

class Service {
private:
    float price;
    std::string type;
    std::string description;
    int serviceID;
public:
//    Service(int serviceId, float price, const string &type, const string &descryption);
    Service(float price, const string &type, const string &description, int serviceId);

    virtual float getActualPrice() = 0;

    virtual std::string getActualType() =0;

    virtual std::string getActualDescription() =0;

    virtual string getServiceInfo()  =0;

    virtual ~Service();

    int getServiceId() const;

    float getPrice() const;

    const string &getType() const;

    const string &getDescription() const;
};


#endif //COMPUTERSERVICE_SERVICE_H
