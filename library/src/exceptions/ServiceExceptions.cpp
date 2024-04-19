//
// Created by mprus on 16/06/2023.
//
#include "exceptions/ServiceExceptions.h"

ServiceExceptions::ServiceExceptions(const std::string &arg) : logic_error(arg) {}

const std::string ServiceExceptions::exceptionID = "ID: WRONG VALUE!";
const std::string ServiceExceptions::exceptionPrice = "PRICE: FIELD CANNOT BE EMPTY!";
const std::string ServiceExceptions::exceptionType = "TYPE: FIELD CANNOT BE EMPTY!";
const std::string ServiceExceptions::exceptionDescription = "DESCRYPTION: FIELD CANNOT BE EMPTY!";