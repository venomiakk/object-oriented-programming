//
// Created by student on 28.05.23.
//

#include "model/Address.h"
#include "exceptions/AddressExceptions.h"

Address::Address(const std::string &postalCode, const std::string &city, const std::string &street,
                 const std::string &number) : postalCode(postalCode), city(city), street(street), number(number) {
    if (postalCode.empty()) throw AddressExceptions(AddressExceptions::exceptionPostalCode);
    if (city.empty()) throw AddressExceptions(AddressExceptions::exceptionCity);
    if (street.empty()) throw AddressExceptions(AddressExceptions::exceptionStreet);
    if (number.empty()) throw AddressExceptions(AddressExceptions::exceptionNumber);
}

Address::~Address() {

}

const std::string &Address::getPostalCode() const {
    return postalCode;
}


const std::string &Address::getCity() const {
    return city;
}

const std::string &Address::getStreet() const {
    return street;
}

const std::string &Address::getNumber() const {
    return number;
}

std::string Address::getAddress() const {
    return "Address: " + this->getPostalCode()+ " "+ this->getCity() + ", "+ this->getStreet() + " "+ this->getNumber();
}
