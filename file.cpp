// file.cpp
// Programmers: [NUR ADILAH BINTI ROSLY]
// Matric No: [24302425]
// Purpose: handle file operations
// What it does: save parking data to file, appends data without deleting old records

//use this function
// saveToFile

#include <fstream>
#include <string>
using namespace std;

void saveToFile(string type, string plate, int hours, double fee) {
    ofstream file("parking_data.txt", ios::app);
    file << type << " " << plate << " "
         << hours << " RM " << fee << endl;
    file.close();
}
