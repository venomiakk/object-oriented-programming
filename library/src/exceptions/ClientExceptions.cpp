//
// Created by student on 03.06.23.
//

#include "exceptions/ClientExceptions.h"

ClientExceptions::ClientExceptions(const std::string &arg) : logic_error(arg) {}

const std::string ClientExceptions::exceptionID = "ID: WRONG VALUE!";
const std::string ClientExceptions::exceptionName = "NAME: FIELD CANNOT BE EMPTY!";
const std::string ClientExceptions::exceptionLastname = "LASTNAME: FIELD CANNOT BE EMPTY!";
const std::string ClientExceptions::exceptionPhoneNumber = "PHONENUMBER: FIELD CANNOT BE EMPTY!";
const std::string ClientExceptions::exceptionAddress = "ADDRESS: FIELD CANNOT BE EMPTY!";