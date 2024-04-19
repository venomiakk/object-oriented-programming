//
// Created by student on 28.05.23.
//

#ifndef COMPUTERSERVICE_TYPEDEFS_H
#define COMPUTERSERVICE_TYPEDEFS_H

#include <memory>

using namespace std;

class Address;

class Client;
class ClientManager;
class ClientRepository;

class Hardware;
class Software;
class Service;
class ServiceManager;
class ServiceRepository;

class Repair;
class RepairManager;
class RepairRepository;


typedef shared_ptr<Address> AddressPtr;
typedef shared_ptr<Client> ClientPtr;
typedef shared_ptr<Service> ServicePtr;
typedef shared_ptr<Repair> RepairPtr;
typedef shared_ptr<Hardware> HardwarePtr;
typedef shared_ptr<Software> SoftwarePtr;

typedef shared_ptr<ClientRepository> ClientRepoPtr;
typedef shared_ptr<ServiceRepository> ServiceRepoPtr;
typedef shared_ptr<RepairRepository> RepairRepoPtr;

#endif //COMPUTERSERVICE_TYPEDEFS_H
