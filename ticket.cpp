#include <iostream>
using namespace std;

int main() {
    int tickets;
    float price = 150, total;

    cout << "Enter number of tickets: ";
    cin >> tickets;

    total = tickets * price;

    cout << "Ticket Price: Rs. " << price << endl;
    cout << "Total Amount: Rs. " << total << endl;
    cout << "Booking Successful!" << endl;

    return 0;
}