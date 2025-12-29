// output.cpp
// Programmers: [Nurul Huda Binti Zakaria]
// Matric No: [24302691]
// Purpose: display results to user
// What it does: display parking fee receipt, shows vehicle details, shows total fee

//use this function
// displayReceipt
// displayError
//if need to add more function, please add here

#include <iostream>
#include <string>
using namespace std;

void displayReceipt(string vehicleType, string plateNumber, int hours, double fee)
{
    cout << endl;
    cout << "========== Parking Receipt ==========" << endl;
    cout << "Vehicle Type   : " << vehicleType << endl;
    cout << "Plate Number   : " << plateNumber << endl;
    cout << "Hours Parked   : " << hours << " hours " << endl;
    cout << "Total Fee(RM)  : " << fee << endl;
    cout << "=====================================" << endl;
}

void displayError(string message)
{
    cout << "Error: " << message << endl;
}