//
// Created by adrian on 16.06.23.
//

#include "exceptions/ClientRepositoryExceptions.h"

ClientRepositoryExceptions::ClientRepositoryExceptions(const std::string &arg) : logic_error(arg) {}

const std::string ClientRepositoryExceptions::exceptionAdd = "GIVEN CLIENT DOSEN'T EXIST!";
const std::string ClientRepositoryExceptions::exceptionGet = "GIVEN INDEX IS OUT OF SCOPE!";
const std::string ClientRepositoryExceptions::exceptionRm1 = "GIVEN CLIENT DOSEN'T EXIST!";
const std::string ClientRepositoryExceptions::exceptionRm2 = "COLLECTION DOSEN'T CONTAIN GIVEN CLIENT!";
