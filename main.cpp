// main.cpp
// Programmers: NUR ADILAH BINTI ROSLY
// Matric No: 24302425
// Purpose: starting point of the programming, control the program flow
// What it dose: display system title, call input function, call validation function, call calculation function, display recipt, save data to file     

#include <iostream>
#include <string>
#include "function.hpp"

using namespace std;

int main() 
{
    string vehicleType, plateNumber;
    int hours;
    double fee;

    cout << "===== PARKING BILL SYSTEM =====" << endl;

    vehicleType = inputVehicleType();
    if (!validateVehicleType(vehicleType)) 
    {
        cout << "Invalid vehicle type!" << endl;
        return 0;
    }

    plateNumber = inputPlateNumber();
    hours = inputHours();

    if (!validateHours(hours)) 
    {
        cout << "Invalid hours!" << endl;
        return 0;
    }

    fee = calculateFee(vehicleType, hours);
    displayReceipt(vehicleType, plateNumber, hours, fee);
    saveToFile(vehicleType, plateNumber, hours, fee);

    return 0;
}