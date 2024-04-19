//
// Created by student on 28.05.23.
//

#include "model/Service.h"
#include "exceptions/ServiceExceptions.h"

//}

//Service::Service(int serviceId, float price, const string &type, const string &descryption) : serviceID(serviceId), price(price), type(type),
//                                                                                              description(descryption){
//    if (serviceId<1) throw ServiceExceptions(ServiceExceptions::exceptionID);
//    if (price<0) throw ServiceExceptions(ServiceExceptions::exceptionPrice);
//    if (type.empty()) throw ServiceExceptions(ServiceExceptions::exceptionType);
//    if (descryption.empty()) throw ServiceExceptions(ServiceExceptions::exceptionDescription);
Service::Service(float price, const string &type, const string &description, int serviceId) : price(price), type(type),
                                                                                              description(description),
                                                                                              serviceID(serviceId) {
    if (serviceId<1) throw ServiceExceptions(ServiceExceptions::exceptionID);
    if (price<0) throw ServiceExceptions(ServiceExceptions::exceptionPrice);
    if (type.empty()) throw ServiceExceptions(ServiceExceptions::exceptionType);
    if (description.empty()) throw ServiceExceptions(ServiceExceptions::exceptionDescription);
}
//
//const float &Service::getActualPrice() const {
//    return price;
//}
//
//const std::string &Service::getActualType() const {
//    return type;
//}
//
//const std::string &Service::getActualDescription() const {
//    return description;
//}
Service::~Service() {

}
//
//string Service::getServiceInfo() const {
//    return "Service "+ to_string(this->serviceID)+": "+ to_string(this->getActualPrice()) + " " + this->getActualType() + ", " +
//            this->getActualDescription();
//}

int Service::getServiceId() const {
    return serviceID;
}

float Service::getPrice() const {
    return price;
}

const string &Service::getType() const {
    return type;
}

const string &Service::getDescription() const {
    return description;
}
