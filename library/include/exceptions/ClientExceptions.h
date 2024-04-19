//
// Created by student on 03.06.23.
//

#ifndef COMPUTERSERVICE_CLIENTEXCEPTIONS_H
#define COMPUTERSERVICE_CLIENTEXCEPTIONS_H

#include <stdexcept>

class ClientExceptions : public std::logic_error{

public:
    explicit ClientExceptions(const std::string &arg);
    static const std::string exceptionID;
    static const std::string exceptionName;
    static const std::string exceptionLastname;
    static const std::string exceptionPhoneNumber;
    static const std::string exceptionAddress;
};


#endif //COMPUTERSERVICE_CLIENTEXCEPTIONS_H
