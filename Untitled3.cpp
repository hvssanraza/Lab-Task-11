#include <iostream>
using namespace std;

double calculatePrice(int itemPrice, int quantity) {
    return itemPrice * quantity;
}

int main() {
    int choice, quantity;
    double totalBill = 0;
    char repeat;

    cout << "Welcome to our Restaurant!" << endl;
    cout << "We're happy to serve you today. Let's get started!" << endl;

    do {
        cout << "Here's our menu for today:" << endl;
        cout << "1: Pizza - $12" << endl;
        cout << "2: Burger - $8" << endl;
        cout << "3: Fries - $5" << endl;
        cout << "4: Drinks - $3" << endl;
        cout << "What would you like to order? (1-4): ";
        cin >> choice;

        cout << "How many would you like to order? ";
        cin >> quantity;

        switch (choice) {
            case 1:
                totalBill += calculatePrice(12, quantity);
            cout << "You've ordered " << quantity << " Pizza. Yummy!" << endl;
            break;
            case 2:
                totalBill += calculatePrice(8, quantity);
            cout << "You've ordered " << quantity << " Burger. Delicious!" << endl;
            break;
            case 3:
                totalBill += calculatePrice(5, quantity);
            cout << "You've ordered " << quantity << " Fries. Enjoy!" << endl;
            break;
            case 4:
                totalBill += calculatePrice(3, quantity);
            cout << "You've ordered " << quantity << " Drink. Refreshing!" << endl;
            break;
            default:
                cout << "Oops! That choice isn't on the menu. Please pick a valid option." << endl;
        }

        cout << "Would you like to add another item to your order? (y/n): ";
        cin >> repeat;
        cout << endl;

    } while (repeat == 'y' || repeat == 'Y');

    cout << "Thank you for your order! Your total bill is: $" << totalBill << endl;
    cout << "We hope you enjoy your meal. Have a great day!" << endl;

    return 0;
}

