#include <iostream>
#include <random>
#include <fstream>
#include <sstream>
#include <cstdlib>

using namespace std;
using std::string;



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
    double Balance;

    int generateRandomNumber() {
        std::random_device rd;
        std::mt19937 gen(rd());
        std::uniform_int_distribution<> distr(100000000, 999999999);
        return distr(gen);
    }

    // Constructor
    Account() {
        AccountNumber = generateRandomNumber();
        Balance = 0;

        stringstream Constructor;
        Constructor << "Account object is created.\n"
        << "Account Number: " << AccountNumber;
    }

    // Method to add account attributes to database
    void create_acc() {

        ofstream oFile;

        // Open accounts file
        oFile.open("~/Desktop/Repos/Banking-System/database/accounts.txt");
        if (!oFile.is_open()) {
            cout << "Error opening the output file!\n";
        }

        // Concatenate string to be written in file
        stringstream db_insert; 
        db_insert << "First Name: " << FirstName << ", Last Name: " << LastName << ", AccountNumber: " << AccountNumber << ", Balance: " << Balance << "\n";

        // Write account info to text file
        oFile << db_insert.str();
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

        stringstream dep_insert;
        dep_insert << "AccountNumber: " << AccountNumber << ", Action Type: Deposit" << "Amount: " << amount;

        oFile << dep_insert.str();
        oFile.close();

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

 
        stringstream withdraw_insert;
        withdraw_insert << "AccountNumber: " << AccountNumber << ", Action Type: Withdrawal" << "Amount: " << amount;

        oFile << withdraw_insert.str();
        oFile.close();

        return;
    }
};


