//
// Created by mprus on 16/06/2023.
//

#include "exceptions/ServiceRepositoryExceptions.h"

ServiceRepositoryExceptions::ServiceRepositoryExceptions(const std::string &arg) : logic_error(arg) {}
const std::string ServiceRepositoryExceptions::exceptionAdd = "GIVEN SERVICE DOSEN'T EXIST!";
const std::string ServiceRepositoryExceptions::exceptionGet = "GIVEN INDEX IS OUT OF SCOPE!";
const std::string ServiceRepositoryExceptions::exceptionRm1 = "GIVEN SERVICE DOSEN'T EXIST!";
const std::string ServiceRepositoryExceptions::exceptionRm2 = "COLLECTION DOSEN'T CONTAIN GIVEN SERVICE!";