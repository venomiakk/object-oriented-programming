//
// Created by student on 28.05.23.
//

#include "repositories/ClientRepository.h"
#include <string>
#include "model/Client.h"
#include "exceptions/ClientRepositoryExceptions.h"
#include <algorithm>

bool ClientRepository::add(const ClientPtr &client) {
    if (client== nullptr){
        throw ClientRepositoryExceptions(ClientRepositoryExceptions::exceptionAdd);
    } else{
        clientsStorage.push_back(client);
        return true;
    }
}

/*
ClientPtr ClientRepository::get(int index) {
    if (index <0 || index > clientsStorage.size()){
        throw ClientRepositoryExceptions(ClientRepositoryExceptions::exceptionGet);
    }
    return clientsStorage[index];
}
*/

void ClientRepository::rm(const ClientPtr &client) {
    if (client== nullptr){
        throw ClientRepositoryExceptions(ClientRepositoryExceptions::exceptionRm1);
    }
    if (find(clientsStorage.begin(), clientsStorage.end(), client) == clientsStorage.end()){
        throw ClientRepositoryExceptions(ClientRepositoryExceptions::exceptionRm2);
    }
    clientsStorage.erase(remove(clientsStorage.begin(), clientsStorage.end(), client), clientsStorage.end());
}

const ClientPtr &ClientRepository::get(const int &id) const {
    for (auto & i : clientsStorage) {
        if (i->getId()==id){return i;}
    }
    throw ClientRepositoryExceptions(ClientRepositoryExceptions::exceptionRm2);
}

string ClientRepository::report() const {
    string value;
    for (auto & i : clientsStorage) {
        value+=i->getClientInfo()+"\n";
    }
    return value;
}
/*

int ClientRepository::size() {
    return clientsStorage.size();
}
*/
/*

ClientPtr ClientRepository::findById(int id) {
    for (auto & i : clientsStorage) {
        if (i->getId()==id){return i;}
    }
    return nullptr;
}
*/

const vector<ClientPtr> &ClientRepository::getStorage() const {
    return clientsStorage;
}
