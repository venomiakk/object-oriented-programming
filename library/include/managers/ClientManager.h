//
// Created by student on 28.05.23.
//

#ifndef COMPUTERSERVICE_CLIENTMANAGER_H
#define COMPUTERSERVICE_CLIENTMANAGER_H

#include <vector>
#include "typedefs.h"

class ClientManager {
private:
    ClientRepoPtr clientsRepo;
public:
    explicit ClientManager();

    virtual ~ClientManager();

    ClientPtr registerClient(int id, const string& name, const string& lastname, const string& phoneNumber, const AddressPtr& address) const;
    void unregisterClient(ClientPtr client) const;
    ClientPtr getClient(int id) const;

    int getNumberOfClients() const;
    string getClientsReport() const;
};


#endif //COMPUTERSERVICE_CLIENTMANAGER_H
