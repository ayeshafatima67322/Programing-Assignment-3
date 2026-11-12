#include <iostream>
#include <iomanip>
using namespace std;

int main() {
    double units, bill = 0, surcharge = 0, lateFee = 0;
    char latePayment;

    cout << "Enter electricity units consumed: ";
    cin >> units;

    if (units < 0) {
        cout << "Invalid units.\n";
        return 0;
    }

    // Progressive unit rates
    if (units <= 100)
        bill = units * 10;
    else if (units <= 200)
        bill = 100 * 10 + (units - 100) * 15;
    else if (units <= 500)
        bill = 100 * 10 + 100 * 15 + (units - 200) * 20;
    else
        bill = 100 * 10 + 100 * 15 + 300 * 20 + (units - 500) * 25;

    if (bill > 10000) {
        surcharge = bill * 0.05;
        bill += surcharge;
    }

    cout << "Was payment made after the due date? (Y/N): ";
    cin >> latePayment;
    if (latePayment == 'Y' || latePayment == 'y') {
        lateFee = bill * 0.10;
        bill += lateFee;
    }

    cout << fixed << setprecision(2);
    cout << "\nBasic bill: Rs. " << bill - surcharge - lateFee
         << "\nSurcharge: Rs. " << surcharge
         << "\nLate fee: Rs. " << lateFee
         << "\nFinal bill: Rs. " << bill << '\n';
    return 0;
}