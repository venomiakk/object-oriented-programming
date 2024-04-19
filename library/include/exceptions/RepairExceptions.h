//
// Created by adrian on 18.06.23.
//

#ifndef COMPUTERSERVICE_REPAIREXCEPTIONS_H
#define COMPUTERSERVICE_REPAIREXCEPTIONS_H

#include <stdexcept>

class RepairExceptions : public std::logic_error{
public:
    explicit RepairExceptions(const std::string &arg);
    static const std::string exceptionID;
    static const std::string exceptionStartDate;
    static const std::string exceptionClient;
    static const std::string exceptionService;
    static const std::string exceptionEndDate;
};


#endif //COMPUTERSERVICE_REPAIREXCEPTIONS_H
