#include <iostream>
#include "classes.cpp"

using namespace std;
using std::string;

int create_acc() {
    string FirstName;
    string LastName;

    long AccountNumber;
    long DateOfBirth;
    double Balance;
    
    int PIN_Number;
    int LastFourSocial;
    
    cout << "\nPlease provide some information to create your account.\n";

    cout << "First Name: ";
    cin >> FirstName;

    cout << "Last Name: ";
    cin >> LastName;

    cout << "Date of Birth (MMDDYYYY): ";
    cin >> DateOfBirth;

    cout << "Select your PIN Number: ";
    cin >> PIN_Number;

    cout << "Last four digits of your Social Security Number: ";
    cin >> LastFourSocial;


    return 0;
}

int transaction() {
    int pin;
    double amount;
    char action;

    cout << "\nPlease enter your PIN: ";
    cin >> pin;

    cout << "\n1. Deposit" << endl
         << "2. Withdrawal" << endl
         << "Choose an action: ";

    cin >> action;

    switch (action) {
        case '1':
            cout << "\nEnter the amount you would like to deposit: ";
            cin >> amount;
            break;

        case '2':
            cout << "\nEnter the amount you would like to withdraw: ";
            cin >> amount;
            break;

        default:
            cout << "\nSorry, that isn't an option." << endl;
            break;
    }

    return 0;
}

void close_app() {
    return;
}

int main() {
    char choice;

    cout << "Welcome to the Christian Bank!" << endl
         << "1. Make an Account" << endl
         << "2. Make a transaction" << endl
         << "3. Quit" << endl 
         << "Make your choice: ";

    cin >> choice;

    switch(choice) {

        case '1':
            create_acc();
            break;

        case '2':
            transaction();
            break;

        case '3':
            close_app();
            break;

        default:
            cout << "Invalid choice!" << endl;
    }
    return 0;
}
