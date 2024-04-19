//
// Created by mprus on 19/06/2023.
//
#include <boost/test/unit_test.hpp>
#include "typedefs.h"
#include "repositories/ServiceRepository.h"
#include "model/Hardware.h"
#include "model/Software.h"
#include "model/Service.h"
#include "managers/ServiceManager.h"

BOOST_AUTO_TEST_SUITE(ServiceManagerTest)

HardwarePtr hardware = make_shared<Hardware>(20.0,"Naprawa Dysku","Hardware",1,"Kontroler");
SoftwarePtr software = make_shared<Software>(40.0,"Reinstalacja Windows 10","Software",1,"Windows 10");
ServiceManager m;

    BOOST_AUTO_TEST_CASE(ConstructorTest){
        BOOST_CHECK_THROW(m.getService(1),logic_error);
//        BOOST_TEST(m.getService(1)== nullptr);
        BOOST_TEST(m.addService(hardware));
        BOOST_TEST(m.getService(1));
        BOOST_TEST(m.getNumberOfServices()==1);
        BOOST_TEST(m.addService(software));
        BOOST_TEST(m.getService(1));
        BOOST_TEST(m.getNumberOfServices()==2);
        m.removeService(m.getService(1));
//        BOOST_TEST(m.getService(1)== nullptr);
//        BOOST_CHECK_THROW(m.getService(1),logic_error);
        BOOST_TEST(m.getNumberOfServices()==1);

        m.removeService(m.getService(1));
//        BOOST_TEST(m.getService(1)== nullptr);
        BOOST_CHECK_THROW(m.getService(1),logic_error);
        BOOST_TEST(m.getNumberOfServices()==0);
    }

BOOST_AUTO_TEST_SUITE_END()