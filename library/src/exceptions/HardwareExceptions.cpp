//
// Created by mprus on 16/06/2023.
//
#include "exceptions/HardwareExceptions.h"

HardwareExceptions::HardwareExceptions(const std::string &arg) : logic_error(arg) {}

const std::string HardwareExceptions::exceptionHardware = "HARDWARE: FIELD CANNOT BE EMPTY!";