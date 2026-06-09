#include <iostream>
using namespace std;

int main() {
    int units;
    float bill;

    cout << "Enter units consumed: ";
    cin >> units;

    bill = units * 5;   

    cout << "Electricity Bill = Rs. " << bill << endl;

    return 0;
}