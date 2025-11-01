#include <iostream>

using namespace std;

int create_acc() {
    return 0;
}

int make_deposit() {
    return 0;
}

int make_withdrawal() {
    return 0;
}

void close_app() {
    return;
}

int main() {
    char choice;

    cout << "Welcome to the Christian Bank!" << endl
         << "1. Make an Account" << endl
         << "2. Make a deposit" << endl
         << "3. Make a withdrawal" << endl
         << "4. Quit" << endl 
         << "Make your choice: ";

    cin >> choice;

    switch(choice) {

        case '1':
            create_acc();
            break;
    }
    return 0;
}
