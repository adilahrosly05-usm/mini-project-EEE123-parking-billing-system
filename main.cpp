#include <iostream>
#include <iomanip>
#include <string>
#include <cmath>
#include "parking.hpp"

using namespace std;

// Billing rates (assumptions)
const double CAR_RATE = 2.00;        // first hour RM for car    
const double MOTOR_RATE = 1.00;      // first hour RM for motorcycle
const double ADDITIONAL_RATE = 0.50; // additional hour RM

int main()
{
   
    string vehicleType;
    double hoursParked, totalFee;

    cout << "Enter vehicle type (car/motorcycle): ";
    cin >> vehicleType;
    cout << "Enter hours parked: ";
    cin >> hoursParked;

    cout << fixed << setprecision(2);
    totalFee = calculateParkingFee(vehicleType, hoursParked);
    cout << "Total parking fee: RM " << totalFee << endl;
    cin >> totalFee;  // to prevent console from closing immediately

    return 0;
}

double calculateParkingFee(string vehicleType, double hoursParked) 
{
    double fee = 0.0;

    if (vehicleType == "car")
    {
        if (hoursParked <= 1.0)
         {
            fee = CAR_RATE;
        } 
        else
         {
            fee = CAR_RATE + ceil(hoursParked - 1) * ADDITIONAL_RATE;
        }
    } 
    else if (vehicleType == "motorcycle") 
    {
        if (hoursParked <= 1.0) 
        {
            fee = MOTOR_RATE;
        } 
        else
         {
            fee = MOTOR_RATE + ceil(hoursParked - 1) * ADDITIONAL_RATE;
        }
    } 
    else
     {
        cerr << "Error: Unknown vehicle type: " << vehicleType << "\n";
    }

    return fee;
}



