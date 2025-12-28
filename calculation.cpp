// calculation.cpp
// Programmers: [NUR ADILAH BINTI ROSLY]
// Matric No: [24302425]
// Purpose: calculate parking fees
// What it does: calculate based on vehicle type and parking hours

//use this function
// calculateFee
// getRate 
// applyMaxCharge
//if need to add more function, please add here

#include "assumptions.h"
#include <string>
using namespace std;

double getRate(string type) 
{
    if (type == "car")
        return CAR_RATE;
    else
        return MOTOR_RATE;
}

double calculateFee(int hours, double rate) 
{
    return hours * rate;
}

double applyMaxCharge(double fee) 
{
    if (fee > MAX_CHARGE)
        return MAX_CHARGE;
    return fee;
}