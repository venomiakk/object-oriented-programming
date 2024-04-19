//
// Created by mprus on 16/06/2023.
//

#ifndef COMPUTERSERVICE_HARDWAREEXCEPTIONS_H
#define COMPUTERSERVICE_HARDWAREEXCEPTIONS_H


#include <stdexcept>

class HardwareExceptions : public std::logic_error{
public:
    explicit HardwareExceptions(const std::string &arg);
    static const std::string exceptionHardware;
};
#endif //COMPUTERSERVICE_HARDWAREEXCEPTIONS_H
