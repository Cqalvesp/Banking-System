#include <iostream>

using std::string;


// Account class
class Account {
public:
    string Name;
    long AccountNumber;
    string CreationDate;
    double Balance;
};

int main() {
    Account account1;
    account1.AccountNumber = 0;
    
    return 0;
}
