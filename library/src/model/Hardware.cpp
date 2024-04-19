//
// Created by student on 28.05.23.
//

#include "model/Hardware.h"
#include "exceptions/HardwareExceptions.h"

//Hardware::Hardware(const std::string &descryption, const std::string &type, float price) : descryption(descryption),
//                                                                                           type(type), price(price) {
//    if (type.empty()) throw HardwareExceptions(HardwareExceptions::exceptionType);
//    if (descryption.empty()) throw HardwareExceptions(HardwareExceptions::exceptionDescription);
//    if (price<0) throw HardwareExceptions(HardwareExceptions::exceptionPrice);
//}

Hardware::Hardware(float price, const string &type, const string &description, int serviceId, const string &parts)
        : Service(price, type, description, serviceId), parts(parts) {
    if (type.empty()) throw HardwareExceptions(HardwareExceptions::exceptionHardware);
}

std::string Hardware::getActualType(){
    return getType();
}

std::string Hardware::getActualDescription() {
    return getDescription();
}

float Hardware::getActualPrice(){
    return getPrice();
}

Hardware::~Hardware() {

}

const string &Hardware::getParts() const {
    return parts;
}

string Hardware::getServiceInfo() {
    return "Hardware | ID: " + to_string(getServiceId())+ " | price: " + to_string(getPrice())
           +" type: " + getType() + " description: "+getDescription() + " parts: " + getParts() +"\n";
}
