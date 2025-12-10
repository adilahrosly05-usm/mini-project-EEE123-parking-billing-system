#include <iostream>
using namespace std;

// Declare functions (need to be supdate)
void showMenu();
void addVehicle();
void showAll();
void searchByPlate();
void saveToFiles();
void loadFromFiles();

int main() {
    int choice;
    do {
        showMenu();
        cin >> choice;
        switch (choice) {
            case 1:
                addVehicle();
                break;
            case 2:
                showAll();
                break;
            case 3:
                searchByPlate();
                break;
            case 4:
                saveToFiles();
                break;
            case 5:
                loadFromFiles();
                break;
            case 6:
                cout << "Exiting program." << endl;
                break;
            default:
                cout << "Invalid choice. Please try again." << endl;
        }
    } while (choice != 6);
    return 0;
}