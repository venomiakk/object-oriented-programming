//
// Created by student on 02.06.23.
//
#include <boost/test/unit_test.hpp>
#include "typedefs.h"
#include "model/Address.h"

BOOST_AUTO_TEST_SUITE(AddressTests)

    BOOST_AUTO_TEST_CASE(ExceptionsTests){
        BOOST_REQUIRE_NO_THROW(Address("pc","c","s","n"));
        BOOST_CHECK_THROW(Address("","c","s","n"),logic_error);
        BOOST_CHECK_THROW(Address("pc","","s","n"),logic_error);
        BOOST_CHECK_THROW(Address("pc","c","","n"),logic_error);
        BOOST_CHECK_THROW(Address("","c","s",""),logic_error);
    }

    AddressPtr address = make_shared<Address>("11-111","City","Street","Number");

    BOOST_AUTO_TEST_CASE(PostalCode){
        BOOST_TEST(address->getPostalCode()=="11-111");
    }
    BOOST_AUTO_TEST_CASE(City){
        BOOST_TEST(address->getCity()=="City");
    }
    BOOST_AUTO_TEST_CASE(Street){
        BOOST_TEST(address->getStreet()=="Street");
    }
    BOOST_AUTO_TEST_CASE(Number){
        BOOST_TEST(address->getNumber()=="Number");
    }

    BOOST_AUTO_TEST_CASE(MethodGetAddress){
        BOOST_TEST(address->getAddress()=="Address: 11-111 City, Street Number");
    }

BOOST_AUTO_TEST_SUITE_END()
