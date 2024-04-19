#include <iostream>
#include "typedefs.h"
#include "model/Address.h"
#include "model/Client.h"
#include "repositories/ClientRepository.h"
#include "managers/ClientManager.h"
#include "model/Repair.h"
#include "model/Service.h"
#include <managers/RepairManager.h>
#include "repositories/RepairRepository.h"
#include "managers/ServiceManager.h"
#include "model/Software.h"

using namespace std;

int main() {
    cout<<"Computer Service"<<endl;
    AddressPtr address = make_shared<Address>("11-111","City","Street","Number");
//    ClientPtr client = make_shared<Client>(1,"name","lastname","123-123-123", address);
    SoftwarePtr service = make_shared<Software>(200.0,"Software","Instalacja windows",1,"Win10");
//
    ClientManager clientsM;
    RepairManager repairsM;
    ServiceManager servicesM;

    clientsM.registerClient(1,"Jan","Kowalski","123-321-456",address);
    servicesM.addService(service);

    cout<<clientsM.getClientsReport()<<endl;
    cout<<servicesM.getServicesReport()<<endl;

    repairsM.addRepair(1,"1/1/2000",clientsM.getClient(1),service);

    cout<<"Dodanie naprawy:"<<endl;

    cout<<repairsM.getAllRepairsReport()<<endl;

    repairsM.archiveRepair(repairsM.getCurrentRepair(1),"1/2/2000");

    cout<<"Archiwizacja naprawy:"<<endl;

    cout<<repairsM.getAllRepairsReport()<<endl;



    cout<<"End of Computer Service"<<endl;
    return 0;
}
