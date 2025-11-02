#include <iostream>

using std::string;


// Account class
class Account {
public:
    string FirstName;
    string LastName;
    long AccountNumber;
    string CreationDate;
    double Balance;
};

// Customer class
class Customer {
private:
    string FirstName;
    string LastName;
    int NumOfAccounts;
    long SSN;
    long DateOfBirth;
};

