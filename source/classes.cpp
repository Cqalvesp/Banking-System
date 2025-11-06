#include <iostream>
#include <fstream>
#include <format>
#include <cstdlib>

using std::string;
using namespace std;

// Account class
class Account {
private:
    // Private attributes
    int PIN;   
    int LastFourSocial;

public:
    string FirstName;
    string LastName;
    long DateOfBirth;
    long AccountNumber;
    string CreationDate;
    double Balance;

    // Constructor
    Account() {
        cout << "Account object is created.\n"
             << "Account Number: ";
    }

    // Method to add account attributes to database
    void create_acc() {

        ofstream oFile;

        oFile.open("~/Desktop/Repos/Banking-System/database/accounts.txt");
        if (!oFile.is_open()) {
            cout << "Error opening the output file!\n";
        }

        oFile << "\n";

        oFile.close();

        return;
    }

    // Method to increase the balance of account object
    void deposit(double amount) {
        ofstream oFile;

        auto startingbalance = Balance;
        Balance += amount;

        oFile.open("~/Desktop/Repos/Banking-System/database/withdrawals.txt");
        if (!oFile.is_open()) {
            cout << "Error opening the output file!\n";
        }

        oFile << "\n";

        return;
    }

    // Method to increase the balance of account object
    void withdraw(double amount) {
        ofstream oFile;

        auto startingbalance = Balance;
        Balance -= amount;

        oFile.open("~/Desktop/Repos/Banking-System/database/withdrawals.txt");
        if (!oFile.is_open()) {
            cout << "Error opening the output file!\n";
        }

        oFile << "\n";

        return;
    }
};


