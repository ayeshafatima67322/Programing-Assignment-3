#include <iostream>
using namespace std;

int main() {
    int age, heartRate;
    double temperature, oxygen;

    cout << "Enter patient age: ";
    cin >> age;
    cout << "Enter temperature in Fahrenheit: ";
    cin >> temperature;
    cout << "Enter oxygen level (%): ";
    cin >> oxygen;
    cout << "Enter heart rate (beats per minute): ";
    cin >> heartRate;

    if (age < 0 || oxygen < 0 || oxygen > 100 || temperature < 0 || heartRate < 0) {
        cout << "Invalid input.\n";
        return 0;
    }

    if (oxygen < 90 || heartRate > 130 || heartRate < 45) {
        cout << "Emergency Category: Critical\n";
        cout << "Recommended Priority: Immediate medical attention\n";
    } else if (age > 65 && temperature > 102) {
        cout << "Emergency Category: High Priority\n";
        cout << "Recommended Priority: Urgent medical assessment\n";
    } else if (oxygen >= 90 && oxygen <= 94) {
        cout << "Emergency Category: Moderate\n";
        cout << "Recommended Priority: Prompt medical assessment\n";
    } else {
        cout << "Emergency Category: Normal\n";
        cout << "Recommended Priority: Routine assessment\n";
    }
    return 0;
}