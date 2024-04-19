//
// Created by student on 28.05.23.
//

#ifndef COMPUTERSERVICE_ADDRESS_H
#define COMPUTERSERVICE_ADDRESS_H

#include <string>

class Address {
private:
    std::string postalCode;
    std::string city;
    std::string street;
    std::string number;
public:
    Address(const std::string &postalCode, const std::string &city, const std::string &street,
            const std::string &number);

    virtual ~Address();

    const std::string &getPostalCode() const;

    const std::string &getCity() const;

    const std::string &getStreet() const;

    const std::string &getNumber() const;

    std::string getAddress() const;
};


#endif //COMPUTERSERVICE_ADDRESS_H
