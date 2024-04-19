//
// Created by adrian on 18.06.23.
//

#include "exceptions/RepairRepositoryExceptions.h"

RepairRepositoryExceptions::RepairRepositoryExceptions(const std::string &arg) : logic_error(arg) {}
const std::string RepairRepositoryExceptions::exceptionAdd = "GIVEN REPAIR DOSEN'T EXIST!";
const std::string RepairRepositoryExceptions::exceptionGet = "GIVEN INDEX IS OUT OF SCOPE!";
const std::string RepairRepositoryExceptions::exceptionRm1 = "GIVEN REPAIR DOSEN'T EXIST!";
const std::string RepairRepositoryExceptions::exceptionRm2 = "COLLECTION DOSEN'T CONTAIN GIVEN REPAIR!";
