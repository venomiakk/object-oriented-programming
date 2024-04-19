//
// Created by student on 28.05.23.
//
#include <boost/test/unit_test.hpp>
#include "typedefs.h"
#include "model/Address.h"
#include "model/Client.h"

BOOST_AUTO_TEST_SUITE(ClientTests)

    AddressPtr address1 = make_shared<Address>("11-111","City","Street","Number");
    AddressPtr address2 = make_shared<Address>("22-222","City2","Street2","Number2");
    Client client(1,"name","lastname","123-123-123", address1);

    BOOST_AUTO_TEST_CASE(ExceptionsTests) {
        BOOST_REQUIRE_NO_THROW(Client(1,"a","a","a",address1));
        BOOST_CHECK_THROW(Client(0,"a","a","a",address1),logic_error);
        BOOST_CHECK_THROW(Client(1,"","a","a",address1),logic_error);
        BOOST_CHECK_THROW(Client(1,"a","","a",address1),logic_error);
        BOOST_CHECK_THROW(Client(1,"a","a","",address1),logic_error);
        BOOST_CHECK_THROW(Client(1,"a","a","a", nullptr),logic_error);
    }

    BOOST_AUTO_TEST_CASE(ParameterConstructorTests){
        BOOST_TEST(client.getId()==1);
        BOOST_TEST(client.getName()=="name");
        BOOST_TEST(client.getLastname()=="lastname");
        BOOST_TEST(client.getPhoneNumber()=="123-123-123");
        BOOST_TEST(client.getAddress()==address1);
    }

    BOOST_AUTO_TEST_CASE(MethodGetClientInfo){
        BOOST_TEST(client.getClientInfo()=="Client 1: name lastname, 123-123-123, Address: 11-111 City, Street Number");
    }

    BOOST_AUTO_TEST_CASE(SettersPositiveTests){
        client.setName("n");
        BOOST_TEST(client.getName()=="n");
        client.setLastname("l");
        BOOST_TEST(client.getLastname()=="l");
        client.setPhoneNumber("321");
        BOOST_TEST(client.getPhoneNumber()=="321");
        client.setAddress(address2);
        BOOST_TEST(client.getAddress()==address2);
    }

    BOOST_AUTO_TEST_CASE(SettersNegativeTests) {
        BOOST_CHECK_THROW(client.setName(""),logic_error);
        BOOST_CHECK_THROW(client.setLastname(""),logic_error);
        BOOST_CHECK_THROW(client.setPhoneNumber(""),logic_error);
        BOOST_CHECK_THROW(client.setAddress(nullptr),logic_error);
    }

BOOST_AUTO_TEST_SUITE_END()