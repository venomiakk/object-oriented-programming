//
// Created by mprus on 16/06/2023.
//

#ifndef COMPUTERSERVICE_SOFTWAREEXCEPTIONS_H
#define COMPUTERSERVICE_SOFTWAREEXCEPTIONS_H
#include <stdexcept>

class SoftwareExceptions : public std::logic_error{
public:
    explicit SoftwareExceptions(const std::string &arg);
    static const std::string exceptionSoft;
};

#endif //COMPUTERSERVICE_SOFTWAREEXCEPTIONS_H
