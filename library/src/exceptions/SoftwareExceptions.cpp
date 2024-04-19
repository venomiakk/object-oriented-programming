//
// Created by mprus on 16/06/2023.
//
#include "exceptions/SoftwareExceptions.h"

SoftwareExceptions::SoftwareExceptions(const std::string &arg) : logic_error(arg) {}

const std::string SoftwareExceptions::exceptionSoft = "SOFTWARE: FIELD CANNOT BE EMPTY!";