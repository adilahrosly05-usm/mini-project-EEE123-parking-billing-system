//function declaration

#include <string>
using namespace std;

string inputVehicleType(); // function to get vehicle type from user (CAR or MOTORCYCLE)
string inputPlateNumber(); // function to get plate number from user
int inputHours(); // function to get parking hours from user

bool validateVehicleType(string); // function to validate vehicle type
bool validateHours(int); // function to validate parking hours
bool validatePlateNumber(string); // function to validate empty plate number 

double calculateFee(string, int); // function to calculate parking fee
double getRate(string); // function to get rate based on vehicle type
double applyMaxCharge(double); // function to apply maximum charge limit

void displayReceipt(string, string, int, double); // function to display parking receipt
void displayError(string); // function to display error messages

void saveToFile(string, string, int, double); // function to save parking data to file
