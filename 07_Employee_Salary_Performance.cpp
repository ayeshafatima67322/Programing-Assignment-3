#include <iostream>
#include <iomanip>
using namespace std;

int main() {
    double salary, attendance, rating, bonusRate = 0, bonus, extra = 0, finalSalary;
    int years;

    cout << "Enter basic salary (Rs.): ";
    cin >> salary;
    cout << "Enter attendance percentage: ";
    cin >> attendance;
    cout << "Enter performance rating (out of 5): ";
    cin >> rating;
    cout << "Enter years of service: ";
    cin >> years;

    if (salary < 0 || attendance < 0 || attendance > 100 ||
        rating < 0 || rating > 5 || years < 0) {
        cout << "Invalid input.\n";
        return 0;
    }

    if (rating >= 3) {
        if (attendance < 75) bonusRate = 0;
        else if (attendance <= 89) bonusRate = 0.05;
        else if (attendance <= 95) bonusRate = 0.10;
        else bonusRate = 0.15;
    }

    bonus = salary * bonusRate;
    if (years > 5) extra = 5000;
    finalSalary = salary + bonus + extra;

    cout << fixed << setprecision(2);
    cout << "Bonus rate: " << bonusRate * 100 << "%\n";
    cout << "Bonus amount: Rs. " << bonus << '\n';
    cout << "Additional service benefit: Rs. " << extra << '\n';
    cout << "Final salary: Rs. " << finalSalary << '\n';
    return 0;
}