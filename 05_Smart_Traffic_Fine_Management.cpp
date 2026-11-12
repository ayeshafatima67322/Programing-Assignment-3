#include <iostream>
#include <iomanip>
using namespace std;

int main() {
    double speed, fine = 0;
    char previous, validLicense, registered;

    cout << "Enter vehicle speed (km/h): ";
    cin >> speed;
    cout << "Previous violations? (Y/N): ";
    cin >> previous;
    cout << "Valid driving licence? (Y/N): ";
    cin >> validLicense;
    cout << "Vehicle registered? (Y/N): ";
    cin >> registered;

    if (speed < 0) {
        cout << "Invalid speed.\n";
        return 0;
    }

    if (speed <= 60) fine = 0;
    else if (speed <= 80) fine = 2000;
    else if (speed <= 100) fine = 5000;
    else fine = 10000;

    if (previous == 'Y' || previous == 'y') fine *= 1.25;
    if (validLicense == 'N' || validLicense == 'n') fine += 5000;
    if (registered == 'N' || registered == 'n') fine += 10000;

    cout << fixed << setprecision(2);
    cout << "Total fine: Rs. " << fine << '\n';
    if (validLicense == 'N' || validLicense == 'n' ||
        registered == 'N' || registered == 'n')
        cout << "Journey Status: Cannot continue until legal documents are valid.\n";
    else
        cout << "Journey Status: May continue after paying the fine.\n";
    return 0;
}