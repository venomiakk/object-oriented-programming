//
// Created by mprus on 19/06/2023.
//
#include <boost/test/unit_test.hpp>
#include "typedefs.h"
#include "repositories/ServiceRepository.h"
#include "model/Service.h"
#include "model/Hardware.h"
#include "model/Software.h"

BOOST_AUTO_TEST_SUITE(ServiceRepositoryTest)
HardwarePtr hardware = make_shared<Hardware>(20.0,"Naprawa Dysku","Hardware",1,"Kontroler");
SoftwarePtr software = make_shared<Software>(40.0,"Reinstalacja Windows 10","Software",4,"Windows 10");
ServiceRepository r;

BOOST_AUTO_TEST_CASE(ConstructorTests){
    BOOST_TEST(r.add(hardware));
    BOOST_TEST(r.get(1)==hardware);
    r.rm(hardware);
    BOOST_CHECK_THROW(r.get(1),logic_error);
}

BOOST_AUTO_TEST_SUITE_END()