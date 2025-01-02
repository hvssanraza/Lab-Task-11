#include <iostream>
using namespace std;

int calculateFee(int rate, int hours) {
    return rate * hours;
}

int main() {
    int vehicleType, hours, totalEarnings = 0;
    char repeat;

    cout << "Welcome to the Parking Fee Calculator!" << endl;

    do {
        cout << "Please select your vehicle type:" << endl;
        cout << "1: Car - $10 per hour" << endl;
        cout << "2: Motorcycle - $5 per hour" << endl;
        cout << "3: Bicycle - $2 per hour" << endl;
        cout << "Enter the vehicle type (1-3): ";
        cin >> vehicleType;

        cout << "How many hours was the vehicle parked? ";
        cin >> hours;

        switch (vehicleType) {
            case 1:
                totalEarnings += calculateFee(10, hours);
            break;
            case 2:
                totalEarnings += calculateFee(5, hours);
            break;
            case 3:
                totalEarnings += calculateFee(2, hours);
            break;
            default:
                cout << "Oops! That’s an invalid vehicle type. Please try again." << endl;
        }

        cout << "Would you like to calculate the fee for another vehicle? (y/n): ";
        cin >> repeat;
        cout << endl;

    } while (repeat == 'y' || repeat == 'Y');

    cout << "Total earnings for the parking lot: $" << totalEarnings << endl;
    return 0;
}


