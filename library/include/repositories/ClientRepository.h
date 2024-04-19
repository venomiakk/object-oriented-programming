//
// Created by student on 28.05.23.
//

#ifndef COMPUTERSERVICE_CLIENTREPOSITORY_H
#define COMPUTERSERVICE_CLIENTREPOSITORY_H

#include <vector>
#include "typedefs.h"
#include "repositories/Repository.h"

class ClientRepository :public Repository<Client> {
private:
    std::vector<ClientPtr> clientsStorage;
public:
    bool add(const ClientPtr&) override;
    const ClientPtr& get(const int&)const override;
    void rm(const ClientPtr&) override;
    string report() const override;
//    int size();
    const vector<ClientPtr>& getStorage() const override;

};


#endif //COMPUTERSERVICE_CLIENTREPOSITORY_H
