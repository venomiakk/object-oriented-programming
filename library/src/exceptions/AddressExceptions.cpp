//
// Created by student on 02.06.23.
//

#include "exceptions/AddressExceptions.h"

AddressExceptions::AddressExceptions(const std::string &arg) : logic_error(arg) {}

const std::string AddressExceptions::exceptionPostalCode = "POSTAL CODE: FIELD CANNOT BE EMPTY!";
const std::string AddressExceptions::exceptionCity = "CITY: FIELD CANNOT BE EMPTY!";
const std::string AddressExceptions::exceptionStreet = "STREET: FIELD CANNOT BE EMPTY!";
const std::string AddressExceptions::exceptionNumber = "NUMBER: FIELD CANNOT BE EMPTY!";