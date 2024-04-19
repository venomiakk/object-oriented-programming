//
// Created by student on 28.05.23.
//

#ifndef COMPUTERSERVICE_REPAIR_H
#define COMPUTERSERVICE_REPAIR_H

#include <string>
#include "typedefs.h"

class Repair {
private:
    int repairID;
    string startDate;
    ClientPtr client;
    ServicePtr service;
    string endDate="-";
public:
    Repair(int repairId, const string &startDate, const ClientPtr &client, const ServicePtr &service);

    virtual ~Repair();

    int getRepairId() const;

    const string &getStartDate() const;

    const ClientPtr &getClient() const;

    const ServicePtr &getService() const;

    const string &getEndDate() const;

    void setEndDate(const string &endDate);

    string getRepairInfo();

};


#endif //COMPUTERSERVICE_REPAIR_H
