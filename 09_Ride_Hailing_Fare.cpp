#include <iostream>
#include <iomanip>
using namespace std;

int main() {
    double distance, waiting, fare, nightCharge = 0, discount = 0;
    int hour;
    char premium, driverCancelled;

    cout << "Enter distance (km): ";
    cin >> distance;
    cout << "Enter waiting time (minutes): ";
    cin >> waiting;
    cout << "Enter ride start hour (0-23): ";
    cin >> hour;
    cout << "Premium member? (Y/N): ";
    cin >> premium;
    cout << "Did driver cancel after accepting? (Y/N): ";
    cin >> driverCancelled;

    if (distance < 0 || waiting < 0 || hour < 0 || hour > 23) {
        cout << "Invalid input.\n";
        return 0;
    }

    if (driverCancelled == 'Y' || driverCancelled == 'y') {
        cout << "Ride Status: Cancelled by driver.\n";
        cout << "Penalty charged to driver: Rs. 300\n";
        cout << "Customer fare: Rs. 0\n";
        return 0;
    }

    fare = 150 + (distance * 50) + (waiting * 10);
    if (hour >= 22 || hour < 6) {
        nightCharge = fare * 0.20;
        fare += nightCharge;
    }
    if (premium == 'Y' || premium == 'y') {
        discount = fare * 0.10;
        fare -= discount;
    }

    cout << fixed << setprecision(2);
    cout << "Base fare + distance + waiting: Rs. "
         << 150 + distance * 50 + waiting * 10 << '\n';
    cout << "Night charge: Rs. " << nightCharge << '\n';
    cout << "Premium discount: Rs. " << discount << '\n';
    cout << "Final ride fare: Rs. " << fare << '\n';
    return 0;
}