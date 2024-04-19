//
// Created by student on 28.05.23.
//

#include "managers/ClientManager.h"
#include <string>
#include "repositories/ClientRepository.h"
#include "model/Client.h"


ClientManager::ClientManager() : clientsRepo(new ClientRepository) {}

ClientManager::~ClientManager() {

}

ClientPtr ClientManager::registerClient(int id, const string& name, const string& lastname, const string& phoneNumber,
                                        const AddressPtr& address) const {
//    if (getClient(id)!= nullptr){
//        return getClient(id);
//        //exception: client with given id already exists!:?
//    }
    ClientPtr client = make_shared<Client>(id,name,lastname,phoneNumber,address);
    clientsRepo->add(client);
    return getClient(id);
}

void ClientManager::unregisterClient(ClientPtr client) const {
    if (client!= nullptr){
        if (getClient(client->getId())){clientsRepo->rm(client);}
    }
    //exceptions???
    //co w sytuacji gdy mamy archiwalna naprawe a chcemy usunac klienta?
}

ClientPtr ClientManager::getClient(int id) const {
    return clientsRepo->get(id);
}

int ClientManager::getNumberOfClients() const {
    return clientsRepo->getStorage().size();
}

string ClientManager::getClientsReport() const {
    return clientsRepo->report();
}
