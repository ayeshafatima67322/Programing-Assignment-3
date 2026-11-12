#include <iostream>
#include <iomanip>
using namespace std;

int main() {
    double marks[5], total = 0, percentage;
    bool passed = true;

    for (int i = 0; i < 5; i++) {
        cout << "Enter marks for subject " << i + 1 << " (out of 100): ";
        cin >> marks[i];
        if (marks[i] < 0 || marks[i] > 100) {
            cout << "Invalid marks. Enter marks from 0 to 100.\n";
            return 0;
        }
        total += marks[i];
        if (marks[i] < 40) passed = false;
    }

    percentage = total / 5.0;

    cout << fixed << setprecision(2);
    cout << "Total marks: " << total << " / 500\n";
    cout << "Overall percentage: " << percentage << "%\n";

    if (!passed) {
        cout << "Result: Failed (at least one subject is below 40).\n";
        cout << "Degree/Medal/Scholarship: Not eligible.\n";
    } else {
        cout << "Result: Passed\n";
        if (percentage < 50)
            cout << "Degree Eligibility: Not eligible (percentage below 50%).\n";
        else
            cout << "Degree Eligibility: Eligible\n";

        if (percentage >= 85) cout << "Award: Gold Medal\n";
        else if (percentage >= 75) cout << "Award: Silver Medal\n";
        else if (percentage >= 65) cout << "Award: Merit Scholarship\n";
        else cout << "Award: No medal or merit scholarship\n";
    }
    return 0;
}