//
// Created by mprus on 16/06/2023.
//

#ifndef COMPUTERSERVICE_SERVICEEXCEPTIONS_H
#define COMPUTERSERVICE_SERVICEEXCEPTIONS_H

#include <stdexcept>

class ServiceExceptions : public std::logic_error{
public:
    explicit ServiceExceptions(const std::string &arg);
    static const std::string exceptionID;
    static const std::string exceptionPrice;
    static const std::string exceptionType;
    static const std::string exceptionDescription;
};
#endif //COMPUTERSERVICE_SERVICEEXCEPTIONS_H
