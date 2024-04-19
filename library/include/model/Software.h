//
// Created by student on 28.05.23.
//

#ifndef COMPUTERSERVICE_SOFTWARE_H
#define COMPUTERSERVICE_SOFTWARE_H
#include <iostream>
#include "typedefs.h"
#include "model/Service.h"
class Software :public Service{
private:
    string software;
public:
//    Software(const std::string &descryption, const std::string &type, float price);
    Software(float price, const string &type, const string &description, int serviceId, const string &software);

    std::string getActualType() override;
    std::string getActualDescription() override;
    float getActualPrice() override;
    string getServiceInfo() override;

    const string &getSoftware() const;

    virtual ~Software();
};


#endif //COMPUTERSERVICE_SOFTWARE_H
