//
// Created by adrian on 18.06.23.
//

#ifndef COMPUTERSERVICE_REPAIRREPOSITORYEXCEPTIONS_H
#define COMPUTERSERVICE_REPAIRREPOSITORYEXCEPTIONS_H

#include <stdexcept>

class RepairRepositoryExceptions :public std::logic_error{
public:
    explicit RepairRepositoryExceptions(const std::string &arg);
    static const std::string exceptionAdd;
    static const std::string exceptionGet;
    static const std::string exceptionRm1;
    static const std::string exceptionRm2;
};


#endif //COMPUTERSERVICE_REPAIRREPOSITORYEXCEPTIONS_H
