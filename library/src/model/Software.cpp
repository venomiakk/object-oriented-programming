//
// Created by student on 28.05.23.
//

#include "model/Software.h"
#include "exceptions/SoftwareExceptions.h"

//Software::Software(const std::string &descryption, const std::string &type, float price) : descryption(descryption),
//                                                                                           type(type), price(price) {

//}

Software::Software(float price, const string &type, const string &description, int serviceId, const string &software)
        : Service(price, type, description, serviceId), software(software) {
    if (software.empty()) throw SoftwareExceptions(SoftwareExceptions::exceptionSoft);
}

std::string Software::getActualType(){
    return getType();
}

std::string Software::getActualDescription() {
    return getDescription();
}

float Software::getActualPrice() {
    return getPrice();
}

Software::~Software() {

}

const string &Software::getSoftware() const {
    return software;
}

string Software::getServiceInfo() {
    return "Software | ID: " + to_string(getServiceId())+ " | price: " + to_string(getPrice())
                  +" type: " + getType() + " description: "+getDescription() + " software: " + getSoftware() +"\n";
}

