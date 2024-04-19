//
// Created by mprus on 19/06/2023.
//
#include <boost/test/unit_test.hpp>
#include "typedefs.h"
#include "model/Hardware.h"

BOOST_AUTO_TEST_SUITE(HardwareTests)

    BOOST_AUTO_TEST_CASE(ExceptionsTests){
        BOOST_REQUIRE_NO_THROW(Hardware(1.0,"ye","y",2,"s"));
        BOOST_CHECK_THROW(Hardware(1.0,"","y",2,"s"),logic_error);
        BOOST_CHECK_THROW(Hardware(1.0,"ye","",2,"w"),logic_error);
        BOOST_CHECK_THROW(Hardware(1.0,"ye","y",0,"s"),logic_error);
    }

HardwarePtr hardware1 = make_shared<Hardware>(220.0,"Hardware","Wymiana CPU",1,"cpu");

    BOOST_AUTO_TEST_CASE(Descryption){
        BOOST_TEST(hardware1->getActualDescription() == "Wymiana CPU");
    }
    BOOST_AUTO_TEST_CASE(Type){
        BOOST_TEST(hardware1->getActualType()=="Hardware");
    }
    BOOST_AUTO_TEST_CASE(Price){
        BOOST_TEST(hardware1->getActualPrice()==220.0);
    }

BOOST_AUTO_TEST_SUITE_END()