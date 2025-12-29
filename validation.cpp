// validation.cpp
// Programmers: [NUR ADILAH BINTI ROSLY]
// Matric No: [24302425]
// Purpose: check whether the user input is valid
// What it does: check vehicle type is correct, check plate number is not empty, check parking hours is positive integer

// use this function
// validateVehicleType
// validateHours
// validatePlateNumber 
//if need to add more function, please add here

#include <string>
using namespace std;

bool validateVehicleType(string type)
 {
    return (type == "car" || type == "motorcycle");
}

bool validatePlate(string plate) 
{
    return plate.length() >= 3;
}

bool validateHours(int hours)
 {
    return hours > 0;
}