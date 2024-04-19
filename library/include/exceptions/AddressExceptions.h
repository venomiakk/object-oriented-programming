//
// Created by student on 02.06.23.
//

#ifndef COMPUTERSERVICE_ADDRESSEXCEPTIONS_H
#define COMPUTERSERVICE_ADDRESSEXCEPTIONS_H

#include <stdexcept>

class AddressExceptions : public std::logic_error{
public:
    explicit AddressExceptions(const std::string &arg);
    static const std::string exceptionPostalCode;
    static const std::string exceptionCity;
    static const std::string exceptionStreet;
    static const std::string exceptionNumber;
};


#endif //COMPUTERSERVICE_ADDRESSEXCEPTIONS_H
