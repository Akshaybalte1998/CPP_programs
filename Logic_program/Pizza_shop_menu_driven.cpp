#include <iostream>

using namespace std;

// Function to display the menu and return the price of the selected pizza
int displayMenu() {
    cout << "Menu:" << endl;
    cout << "1. Margherita Pizza - Rs. 200" << endl;
    cout << "2. Farmhouse Pizza - Rs. 250" << endl;
    cout << "3. Pepperoni Pizza - Rs. 300" << endl;
    cout << "4. Cheese Burst Pizza - Rs. 350" << endl;
    cout << "5. Exit" << endl;
    cout << "Enter your choice: ";

    int choice;
    cin >> choice;

    int price = 0;
    switch (choice) {
        case 1:
            price = 200;
            break;
        case 2:
            price = 250;
            break;
        case 3:
            price = 300;
            break;
        case 4:
            price = 350;
            break;
        case 5:
            cout << "Exiting..." << endl;
            break;
        default:
            cout << "Invalid choice. Please enter a number between 1 and 5." << endl;
            break;
    }
    return price;
}

int main() {
    int totalAmount = 0;
    int choice = 0;

    while (choice != 5) {
        int price = displayMenu();
        if (choice != 5) {
            totalAmount += price;
            cout << "Your total amount so far: Rs. " << totalAmount << endl;
        }
    }

    cout << "Thank you for ordering. Your total amount is: Rs. " << totalAmount << endl;

    return 0;
}
