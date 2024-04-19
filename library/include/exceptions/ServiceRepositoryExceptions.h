//
// Created by mprus on 16/06/2023.
//

#ifndef COMPUTERSERVICE_SERVICEREPOSITORYEXCEPTIONS_H
#define COMPUTERSERVICE_SERVICEREPOSITORYEXCEPTIONS_H

#include <stdexcept>

class ServiceRepositoryExceptions :public std::logic_error {
public:
    explicit ServiceRepositoryExceptions(const std::string &arg);

    static const std::string exceptionAdd;
    static const std::string exceptionGet;
    static const std::string exceptionRm1;
    static const std::string exceptionRm2;
};
#endif //COMPUTERSERVICE_SERVICEREPOSITORYEXCEPTIONS_H
