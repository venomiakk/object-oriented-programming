//
// Created by adrian on 17.06.23.
//
#include <boost/test/unit_test.hpp>
#include "typedefs.h"
#include "repositories/ClientRepository.h"
#include "model/Address.h"
#include "model/Client.h"
#include "managers/ClientManager.h"

BOOST_AUTO_TEST_SUITE(ClientManagerTest)
    AddressPtr address = make_shared<Address>("11-111","City","Street","Number");
    ClientManager m;


    BOOST_AUTO_TEST_CASE(ConstructorTest){
        BOOST_CHECK_THROW(m.getClient(1),logic_error);
        BOOST_TEST(m.registerClient(1,"name","lastname","123-123-123", address));
        BOOST_TEST(m.getClient(1));
        BOOST_TEST(m.getNumberOfClients()==1);
//        BOOST_TEST(m.registerClient(1,"name","lastname","123-123-123", address));
//        BOOST_TEST(m.getClient(1));
//        BOOST_TEST(m.getNumberOfClients()==1);
        m.unregisterClient(m.getClient(1));
        BOOST_CHECK_THROW(m.getClient(1),logic_error);
        BOOST_TEST(m.getNumberOfClients()==0);

//        m.unregisterClient(m.getClient(1));
        BOOST_CHECK_THROW(m.getClient(1),logic_error);
        BOOST_TEST(m.getNumberOfClients()==0);
    }

BOOST_AUTO_TEST_SUITE_END()