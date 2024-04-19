cmake_minimum_required(VERSION 3.4)
project(Library)

set(SOURCE_FILES
        src/model/Client.cpp include/model/Client.h src/repositories/RepairRepository.cpp include/repositories/RepairRepository.h src/repositories/ServiceRepository.cpp include/repositories/ServiceRepository.h src/repositories/ClientRepository.cpp include/repositories/ClientRepository.h src/managers/ClientManager.cpp include/managers/ClientManager.h src/managers/ServiceManager.cpp include/managers/ServiceManager.h src/managers/RepairManager.cpp include/managers/RepairManager.h src/model/Repair.cpp include/model/Repair.h src/model/Address.cpp include/model/Address.h src/model/Service.cpp include/model/Service.h src/model/Hardware.cpp include/model/Hardware.h src/model/Software.cpp include/model/Software.h include/typedefs.h test/master.cpp test/ClientTest.cpp test/AddressTest.cpp src/exceptions/AddressExceptions.cpp include/exceptions/AddressExceptions.h src/exceptions/ClientExceptions.cpp include/exceptions/ClientExceptions.h src/exceptions/ClientRepositoryExceptions.cpp include/exceptions/ClientRepositoryExceptions.h test/ClientRepositoryTest.cpp test/ClientManagerTest.cpp src/exceptions/RepairExceptions.cpp include/exceptions/RepairExceptions.h test/RepairTest.cpp src/exceptions/RepairRepositoryExceptions.cpp include/exceptions/RepairRepositoryExceptions.h test/RepairRepositoryTest.cpp test/RepairManagerTest.cpp include/exceptions/ServiceExceptions.h include/exceptions/ServiceRepositoryExceptions.h src/exceptions/ServiceExceptions.cpp src/exceptions/ServiceRepositoryExceptions.cpp include/exceptions/SoftwareExceptions.h include/exceptions/HardwareExceptions.h src/exceptions/SoftwareExceptions.cpp src/exceptions/HardwareExceptions.cpp include/repositories/Repository.h)
#Utwórz bibliotekę typu STATIC, SHARED albo MODULE ze wskazanych źródeł
add_library(Library ${SOURCE_FILES})

target_include_directories(Library PUBLIC include)

enable_testing()

find_package (Boost 1.60.0 COMPONENTS "unit_test_framework" REQUIRED)

include_directories(
        ${CMAKE_CURRENT_SOURCE_DIR}/include
        ${Boost_INCLUDE_DIRS}
)

set(SOURCE_TEST_FILES test/master.cpp test/ClientTest.cpp test/AddressTest.cpp test/ClientRepositoryTest.cpp test/ClientManagerTest.cpp test/RepairTest.cpp test/RepairRepositoryTest.cpp test/RepairManagerTest.cpp test/SoftwareTest.cpp test/HardwareTest.cpp test/ServiceManagerTest.cpp test/ServiceRepositoryTest.cpp) # tu w przyszłości będą dodawane pliki źródłowe testów

add_executable (LibraryTest ${SOURCE_TEST_FILES})

#dołącz bibliotekę z testowanymi klasami oraz bibliotekę boost.test do programu testów
target_link_libraries (LibraryTest
        Library
        ${Boost_UNIT_TEST_FRAMEWORK_LIBRARY}
        )

#dodaj test TestBiblioteki1. Instrukcji cmake add_test może być wiele.
#Dodatkowe parametry wpływają na szczegółowość generowanego raportu. Standardowo znajduje się on w Testing/Temporary.
add_test(LibraryTest1 LibraryTest
        --report_level=detailed
        --log_level=all
        --color_output=yes
        )

add_custom_target(check ${CMAKE_COMMAND} -E env CTEST_OUTPUT_ON_FAILURE=1 BOOST_TEST_LOG_LEVEL=all
        ${CMAKE_CTEST_COMMAND} -C $<CONFIGURATION> --verbose
        WORKING_DIRECTORY ${CMAKE_BINARY_DIR})