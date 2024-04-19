//
// Created by adrian on 18.06.23.
//

#include "exceptions/RepairExceptions.h"

RepairExceptions::RepairExceptions(const std::string &arg) : logic_error(arg) {}

const std::string RepairExceptions::exceptionID = "ID: WRONG VALUE!";
const std::string RepairExceptions::exceptionStartDate = "START DATE: FIELD CANNOT BE EMPTY!";
const std::string RepairExceptions::exceptionClient = "CLIENT: FIELD CANNOT BE EMPTY!";
const std::string RepairExceptions::exceptionService = "SERVICE: FIELD CANNOT BE EMPTY!";
const std::string RepairExceptions::exceptionEndDate = "END DATE: FIELD CANNOT BE EMPTY!";