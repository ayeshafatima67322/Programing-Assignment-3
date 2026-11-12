#include <iostream>
using namespace std;

int main() {
    double matric, inter, test;
    cout << "Enter Matric percentage: ";
    cin >> matric;
    cout << "Enter Intermediate percentage: ";
    cin >> inter;
    cout << "Enter entry test percentage: ";
    cin >> test;

    if (matric < 0 || matric > 100 || inter < 0 || inter > 100 ||
        test < 0 || test > 100) {
        cout << "Invalid percentage. Enter values from 0 to 100.\n";
        return 0;
    }

    if (matric < 60 || inter < 65 || test < 50) {
        cout << "Admission Status: Rejected\n";
        cout << "Admission Category: Not Eligible\n";
        cout << "Scholarship: Not Eligible\n";
    } else {
        cout << "Admission Status: Accepted\n";
        if (inter >= 85 && test >= 80) {
            cout << "Admission Category: Merit Scholarship Category\n";
            cout << "Scholarship: Eligible\n";
        } else {
            cout << "Admission Category: Regular Admission\n";
            cout << "Scholarship: Not Eligible\n";
        }
    }
    return 0;
}