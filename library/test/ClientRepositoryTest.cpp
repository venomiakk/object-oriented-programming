//
// Created by adrian on 16.06.23.
//
#include <boost/test/unit_test.hpp>
#include "typedefs.h"
#include "repositories/ClientRepository.h"
#include "model/Address.h"
#include "model/Client.h"

BOOST_AUTO_TEST_SUITE(ClientRepositoryTest)
    AddressPtr address = make_shared<Address>("11-111","City","Street","Number");
    ClientPtr client = make_shared<Client>(1,"name","lastname","123-123-123", address);
    ClientRepository repo;

    BOOST_AUTO_TEST_CASE(ExceptionsTests){
        BOOST_CHECK_THROW(repo.add(nullptr), logic_error);
        BOOST_CHECK_THROW(repo.rm(nullptr), logic_error);
        BOOST_CHECK_THROW(repo.rm(client), logic_error);
        BOOST_CHECK_THROW(repo.get(-10), logic_error);
        BOOST_CHECK_THROW(repo.get(10), logic_error);
    }

    BOOST_AUTO_TEST_CASE(ConstructorTests){
        BOOST_TEST(repo.add(client));
        BOOST_TEST(repo.getStorage().size()==1);
        BOOST_TEST(repo.get(1)==client);
        repo.rm(client);
        BOOST_TEST(repo.getStorage().size()==0);
        BOOST_CHECK_THROW(repo.get(1),logic_error);
    }

BOOST_AUTO_TEST_SUITE_END()