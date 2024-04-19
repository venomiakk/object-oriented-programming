//
// Created by mprus on 19/06/2023.
//
#include <boost/test/unit_test.hpp>
#include "typedefs.h"
#include "model/Software.h"

BOOST_AUTO_TEST_SUITE(SoftwareTests)

    BOOST_AUTO_TEST_CASE(ExceptionsTests){
        BOOST_REQUIRE_NO_THROW(Software(1.0,"ye","y",2,"s"));
        BOOST_CHECK_THROW(Software(1.0,"","y",2,"s"),logic_error);
        BOOST_CHECK_THROW(Software(1.0,"ye","",2,"S"),logic_error);
        BOOST_CHECK_THROW(Software(1.0,"ye","y",0,"S"),logic_error);
    }

    SoftwarePtr software1 = make_shared<Software>(40.0,"Software","Reinstalacja Windows",1,"Windows 11");

    BOOST_AUTO_TEST_CASE(Description){
        BOOST_TEST(software1->getActualDescription() == "Reinstalacja Windows");
    }
    BOOST_AUTO_TEST_CASE(Type){
        BOOST_TEST(software1->getActualType()=="Software");
    }
    BOOST_AUTO_TEST_CASE(Price){
        BOOST_TEST(software1->getActualPrice()==40);
    }

BOOST_AUTO_TEST_SUITE_END()