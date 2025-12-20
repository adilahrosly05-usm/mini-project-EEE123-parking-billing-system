//function declaration

#include <string>
using namespace std;

string inputVehicleType(); // function to get vehicle type from user
string inputPlateNumber(); // function to get plate number from user
int inputHours(); // function to get parking hours from user
bool validateVehicleType(string); // function to validate vehicle type
bool validateHours(int); // function to validate parking hours
double calculateFee(string, int); // function to calculate parking fee
void displayReceipt(string, string, int, double); // function to display parking receipt
void saveToFile(string, string, int, double); // function to save parking data to file
