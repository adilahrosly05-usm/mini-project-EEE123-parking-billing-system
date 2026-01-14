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
#include "function.hpp"
using namespace std;

void displayWelcome()
{
   cout << "===============================================" << endl;
    cout << "      WELCOME TO THE PARKING BILL SYSTEM      " << endl;
    cout << "            Developed by: Group 20            " << endl;
    cout << "===============================================" << endl;
    cout << "      Initializing system... Please wait.     " << endl;
    cout <<  "                                             " << endl; 
    cout << "System ready. Please follow the prompts below." << endl;
    cout << "===============================================" << endl;
    cout <<  "                                              " << endl; 
}

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