//
// Created by student on 28.05.23.
//

#ifndef COMPUTERSERVICE_REPAIRREPOSITORY_H
#define COMPUTERSERVICE_REPAIRREPOSITORY_H

#include "typedefs.h"
#include <vector>
#include "repositories/Repository.h"

class RepairRepository :public Repository<Repair> {
private:
    std::vector<RepairPtr> repairsStorage;
public:
    bool add(const RepairPtr&) override;
    void rm(const RepairPtr&)override;
    const RepairPtr& get(const int&)const override;
    string report() const override;
//    int size();
    const vector<RepairPtr>& getStorage() const override;
};


#endif //COMPUTERSERVICE_REPAIRREPOSITORY_H
