#include<iostream>
#include "ParkingLot.h"
#include "Vehicle.h"

using namespace std;

int main(){

    ParkingLot parkingLot(5);
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

            Vehicle v(number,type);
            parkingLot.parkVehicle(v);
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
            break;
        }
    }

    return 0;
}