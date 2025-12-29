// input.cpp
// Programmers: [Adam Shukri Bin Mohd Shukri]
// Matric No: [24303452]
// Purpose: handle all user input
// What it does: gets vehicle type, get plate number, get parking hours


//function use
// inputVehicleType
// inputPlateNumber
// inputHours
//if need to add more function, please add here

#include <iostream>
#include <string>
using namespace std;

string inputVehicleType() {
    string vehicleType;
    cout << " Enter Vehicle Type: ";
    cin >> vehicleType;
    return vehicleType;
}

string inputPlateNumber() {
    string plateNumber;
    cout << " Enter Plate Number: ";
    cin >> plateNumber;
    return plateNumber;
}

int inputHours() {
    int hours;
    cout << " Enter Hours Parked: ";
    cin >> hours;
    return hours;
}

double inputFee() {
    double fee;
    cout << " Enter Parking Fee: ";
    cin >> fee;
    return fee;
}
