// main.cpp
// Programmers: [NUR ADILAH BINTI ROSLY]
// Matric No: [24302425]
// Purpose: starting point of the programming, control the program flow
// What it dose: display system title, call input function, call validation function, call calculation function, display recipt, save data to file     

#include <iostream>
#include <string>
#include "function.hpp"

using namespace std;

int main() 
{
    string type, plate;
    int hours;
    double rate, fee;

    type = inputVehicleType();
    if (!validateVehicleType(type)) 
    {
        displayError("Invalid vehicle type");
        return 0;
    }

    plate = inputPlateNumber();
    if (!validatePlateNumber(plate)) 
    {
        displayError("Invalid plate number");
        return 0;
    }

    hours = inputHours();
    if (!validateHours(hours)) 
    {
        displayError("Invalid hours");
        return 0;
    }

    rate = getRate(type);
    fee = calculateFee(hours, rate);
    fee = applyMaxCharge(fee);

    displayReceipt(type, plate, hours, fee);
    saveToFile(type, plate, hours, fee);

    return 0;
}