//
// Created by adrian on 19.06.23.
//
#include <boost/test/unit_test.hpp>
#include "typedefs.h"
#include "repositories/RepairRepository.h"
#include "model/Address.h"
#include "model/Client.h"
#include "managers/RepairManager.h"
#include "model/Software.h"

BOOST_AUTO_TEST_SUITE(RepairManagerTest)
    AddressPtr address = make_shared<Address>("11-111","City","Street","Number");
    ClientPtr client = make_shared<Client>(1,"name","lastname","123-123-123", address);
    SoftwarePtr service = make_shared<Software>(200.0,"Software","Instalacja windows",1,"Windows 11");
    RepairManager m;

    BOOST_AUTO_TEST_CASE(ConstructorTest){
        BOOST_CHECK_THROW(m.getCurrentRepair(1),logic_error);
        BOOST_CHECK_THROW(m.getArchiveRepair(1),logic_error);
        BOOST_TEST(m.addRepair(1,"1",client,service));
        BOOST_TEST(m.getCurrentRepair(1));
        BOOST_TEST(m.getNumberOfCurrentRepairs()==1);

//        BOOST_TEST(m.addRepair(1,"1",client,service));
//        BOOST_TEST(m.getCurrentRepair(1));
//        BOOST_TEST(m.getNumberOfCurrentRepairs()==1);

        m.archiveRepair(m.getCurrentRepair(1),"2");
        BOOST_CHECK_THROW(m.getCurrentRepair(1),logic_error);
        BOOST_TEST(m.getNumberOfCurrentRepairs()==0);
        BOOST_TEST(m.getArchiveRepair(1));
        BOOST_TEST(m.getNumberOfArchiveRepairs()==1);

//        m.archiveRepair(m.getCurrentRepair(1),"3");
//        BOOST_TEST(m.getArchiveRepair(1));
//        BOOST_TEST(m.getNumberOfArchiveRepairs()==1);
    }

BOOST_AUTO_TEST_SUITE_END()