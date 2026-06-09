#include <iostream>
using namespace std;

int main() {
    float balance = 1000.0, amount;
    int choice;

    cout << "=== Simple Bank System ===" << endl;
    cout << "Current Balance: " << balance << endl;

    cout << "\n1. Deposit" << endl;
    cout << "2. Withdraw" << endl;
    cout << "Enter your choice: ";
    cin >> choice;

    switch(choice) {
        case 1:
            cout << "Enter amount to deposit: ";
            cin >> amount;

            balance += amount;
            cout << "Deposit Successful!" << endl;
            cout << "Updated Balance: " << balance << endl;
            break;

        case 2:
            cout << "Enter amount to withdraw: ";
            cin >> amount;

            if(amount <= balance) {
                balance -= amount;
                cout << "Withdrawal Successful!" << endl;
                cout << "Remaining Balance: " << balance << endl;
            } else {
                cout << "Insufficient Balance!" << endl;
            }
            break;

        default:
            cout << "Invalid Choice!" << endl;
    }

    return 0;
}