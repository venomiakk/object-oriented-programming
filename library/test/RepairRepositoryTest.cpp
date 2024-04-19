//
// Created by adrian on 18.06.23.
//
#include <boost/test/unit_test.hpp>
#include "typedefs.h"
#include "repositories/RepairRepository.h"
#include "model/Client.h"
#include "model/Repair.h"
#include "model/Address.h"
#include "model/Hardware.h"

BOOST_AUTO_TEST_SUITE(RepairRepositoryTest)
    HardwarePtr service = make_shared<Hardware>(50.0,"Hardware","Wymiana dysku",1,"SSD Samsung 970Evo");
    AddressPtr address = make_shared<Address>("11-111","City","Street","Number");
    ClientPtr client = make_shared<Client>(1,"name","lastname","123-123-123", address);
    RepairPtr repair = make_shared<Repair>(1,"11",client,service);
    RepairRepository repo;

    BOOST_AUTO_TEST_CASE(ExceptionsTests){
        BOOST_CHECK_THROW(repo.add(nullptr), logic_error);
        BOOST_CHECK_THROW(repo.rm(nullptr), logic_error);
        BOOST_CHECK_THROW(repo.rm(repair), logic_error);
        BOOST_CHECK_THROW(repo.get(-10), logic_error);
        BOOST_CHECK_THROW(repo.get(10), logic_error);
    }

    BOOST_AUTO_TEST_CASE(ConstructorTests){
        BOOST_TEST(repo.add(repair));
        BOOST_TEST(repo.getStorage().size()==1);
        BOOST_CHECK_THROW(repo.get(0),logic_error);
        BOOST_TEST(repo.get(1)==repair);
        repo.rm(repair);
        BOOST_TEST(repo.getStorage().size()==0);
        BOOST_CHECK_THROW(repo.get(1),logic_error);
    }
BOOST_AUTO_TEST_SUITE_END()