//
// Created by student on 28.05.23.
//

#include "model/Client.h"
#include "exceptions/ClientExceptions.h"

Client::Client(int id, const string &name, const string &lastname, const string &phoneNumber, const AddressPtr &address)
        : id(id), name(name), lastname(lastname), phoneNumber(phoneNumber), address(address) {
    if (id<1) throw ClientExceptions(ClientExceptions::exceptionID);
    if (name.empty()) throw ClientExceptions(ClientExceptions::exceptionName);
    if (lastname.empty()) throw ClientExceptions(ClientExceptions::exceptionLastname);
    if (phoneNumber.empty()) throw ClientExceptions(ClientExceptions::exceptionPhoneNumber);
    if (address== nullptr) throw ClientExceptions(ClientExceptions::exceptionAddress);
}

Client::~Client() {

}

int Client::getId() const {
    return id;
}

//void Client::setId(int id) {
//    Client::id = id;
//}

const string &Client::getName() const {
    return name;
}

void Client::setName(const string &name) {
    if (!name.empty()){
        Client::name = name;
    } else{
        throw ClientExceptions(ClientExceptions::exceptionName);
    }
}

const string &Client::getLastname() const {
    return lastname;
}

void Client::setLastname(const string &lastname) {
    if (!lastname.empty()){
        Client::lastname = lastname;
    } else{
        throw ClientExceptions(ClientExceptions::exceptionLastname);
    }
}

const string &Client::getPhoneNumber() const {
    return phoneNumber;
}

void Client::setPhoneNumber(const string &phoneNumber) {
    if (!phoneNumber.empty()){
        Client::phoneNumber = phoneNumber;
    } else{
        throw ClientExceptions(ClientExceptions::exceptionPhoneNumber);
    }
}

const AddressPtr &Client::getAddress() const {
    return address;
}

void Client::setAddress(const AddressPtr &address) {
    if (address != nullptr){
        Client::address = address;
    } else{
        throw ClientExceptions(ClientExceptions::exceptionAddress);
    }
}

string Client::getClientInfo() const{
    return "Client "+ to_string(this->id)+": "+ this->name + " " + this->lastname + ", " + this->phoneNumber + ", " +
            this->address->getAddress();

}