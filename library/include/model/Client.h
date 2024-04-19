//
// Created by student on 28.05.23.
//

#ifndef COMPUTERSERVICE_CLIENT_H
#define COMPUTERSERVICE_CLIENT_H

#include <string>
#include "typedefs.h"
#include "Address.h"


class Client {
private:
    int id;
    string name;
    string lastname;
    string phoneNumber;
    AddressPtr address;
public:
    Client(int id, const string &name, const string &lastname, const string &phoneNumber, const AddressPtr &address);

    virtual ~Client();

    int getId() const;

//    void setId(int id);

    const string &getName() const;

    void setName(const string &name);

    const string &getLastname() const;

    void setLastname(const string &lastname);

    const string &getPhoneNumber() const;

    void setPhoneNumber(const string &phoneNumber);

    const AddressPtr &getAddress() const;

    void setAddress(const AddressPtr &address);

    string getClientInfo() const;
};


#endif //COMPUTERSERVICE_CLIENT_H
