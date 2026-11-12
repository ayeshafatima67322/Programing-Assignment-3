#include <iostream>
using namespace std;

int main() {
    int age, yearsEmployed, creditScore;
    double salary, installments;

    cout << "Enter age: ";
    cin >> age;
    cout << "Enter monthly salary (Rs.): ";
    cin >> salary;
    cout << "Enter employment duration in years: ";
    cin >> yearsEmployed;
    cout << "Enter existing monthly loan installments (Rs.): ";
    cin >> installments;
    cout << "Enter credit score: ";
    cin >> creditScore;

    if (age < 0 || salary < 0 || yearsEmployed < 0 ||
        installments < 0 || creditScore < 0) {
        cout << "Invalid input.\n";
        return 0;
    }

    if (creditScore < 600) {
        cout << "Loan Status: Rejected (Credit score below 600).\n";
    } else if (age < 21 || salary < 50000 || yearsEmployed < 2 ||
               installments > salary * 0.40) {
        cout << "Loan Status: Rejected (Minimum requirements not met).\n";
    } else if (salary > 150000 && yearsEmployed > 5) {
        cout << "Loan Status: Approved - Premium Loan Category.\n";
    } else {
        cout << "Loan Status: Approved - Regular Loan Category.\n";
    }
    return 0;
}