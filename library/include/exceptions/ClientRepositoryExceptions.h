//
// Created by adrian on 16.06.23.
//

#ifndef COMPUTERSERVICE_CLIENTREPOSITORYEXCEPTIONS_H
#define COMPUTERSERVICE_CLIENTREPOSITORYEXCEPTIONS_H

#include <stdexcept>

class ClientRepositoryExceptions :public std::logic_error{
public:
    explicit ClientRepositoryExceptions(const std::string &arg);
    static const std::string exceptionAdd;
    static const std::string exceptionGet;
    static const std::string exceptionRm1;
    static const std::string exceptionRm2;
};


#endif //COMPUTERSERVICE_CLIENTREPOSITORYEXCEPTIONS_H
