#include<iostream>
#include "ParkingLot.h"
#include "VehicleFactory.h"
#include "ParkingStorage.h"

using namespace std;

int main(){
    FileParkingStorage storage;
    ParkingLot parkingLot(5, &storage);
    int choice;

    while(true){
        cout << "\n1. Park Vehicle\n2. Remove Vehicle\n3. Show Status\n4. Exit\n";
        cin >> choice;

        if(choice == 1){
            string number,type;
            cout<<"Enter the vehicle Number"<<endl;
            cin>>number;
            cout<<"Enter the vehicle type"<<endl;
            cin>>type;

            auto vehicle = VehicleFactory::createVehicle(type,number);
            if(vehicle){
                parkingLot.parkVehicle(move(vehicle));
            }
            else{
                cout<<"Invalid Vehicle Type"<<endl;
            }
        }
        else if(choice == 2){
            string number;
            cout<<"Enter the vehicle Number"<<endl;
            cin>>number;

            parkingLot.removeVehicle(number);
        }
        else if(choice == 3){
            parkingLot.displayStatus();
        }
        else{
            cout << "Exiting system..." << endl;
            break;
        }
    }

    return 0;
}