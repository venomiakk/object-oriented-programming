//
// Created by adrian on 18.06.23.
//
#include <boost/test/unit_test.hpp>
#include "typedefs.h"
#include "model/Address.h"
#include "model/Client.h"
#include "model/Repair.h"
#include "model/Hardware.h"

BOOST_AUTO_TEST_SUITE(RepairTests)
    AddressPtr address = make_shared<Address>("111","City","Street","Number");
    ClientPtr client = make_shared<Client>(1,"name","lastname","123-123-123", address);
    HardwarePtr service = make_shared<Hardware>(50.0,"Hardware","Wymiana dysku",1,"SSD Samsung 970Evo");

    Repair repair(1,"11",client,service);

    BOOST_AUTO_TEST_CASE(ExceptionsTests) {
        BOOST_REQUIRE_NO_THROW(Repair(1,"1",client,service));
        BOOST_CHECK_THROW(Repair(0,"1",client,service),logic_error);
        BOOST_CHECK_THROW(Repair(1,"",client,service),logic_error);
        BOOST_CHECK_THROW(Repair(1,"1", nullptr,service),logic_error);
        BOOST_CHECK_THROW(Repair(1,"1",client, nullptr),logic_error);
    }

    BOOST_AUTO_TEST_CASE(ParameterConstructorTests){
        BOOST_TEST(repair.getRepairId()==1);
        BOOST_TEST(repair.getStartDate()=="11");
        BOOST_TEST(repair.getClient()==client);
        BOOST_TEST(repair.getService()==service);
        BOOST_TEST(repair.getEndDate()=="-");
    }

    BOOST_AUTO_TEST_CASE(SettersPositiveTests){
        repair.setEndDate("1");
        BOOST_TEST(repair.getEndDate()=="1");
    }

    BOOST_AUTO_TEST_CASE(SettersNegativeTests){
        BOOST_CHECK_THROW(repair.setEndDate(""), logic_error);
    }

BOOST_AUTO_TEST_SUITE_END()