//
// Created by student on 28.05.23.
//

#ifndef COMPUTERSERVICE_REPAIRMANAGER_H
#define COMPUTERSERVICE_REPAIRMANAGER_H

#include "typedefs.h"
#include <vector>

class RepairManager {
private:
    RepairRepoPtr currentRepairs;
    RepairRepoPtr archiveRepairs;
public:
    RepairManager();

    virtual ~RepairManager();

    void archiveRepair(RepairPtr repair, string endDate) const;
    RepairPtr getCurrentRepair(int id) const;
    RepairPtr addRepair(int repairId, const string &startDate, const ClientPtr &client, const ServicePtr &service);

    RepairPtr getArchiveRepair(int id) const;
    int getNumberOfCurrentRepairs() const;
    int getNumberOfArchiveRepairs() const;
    string getCurrentRepairsReport() const;
    string getArchiveRepairsReport() const;
    string getAllRepairsReport() const;

};


#endif //COMPUTERSERVICE_REPAIRMANAGER_H
