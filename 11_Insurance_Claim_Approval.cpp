#include <iostream>
#include <iomanip>
using namespace std;

int main() {
    char validInsurance, policyExpired, validLicence, underInfluence, responsible;
    double damage, payable;

    cout << "Valid vehicle insurance? (Y/N): ";
    cin >> validInsurance;
    cout << "Has the policy expired? (Y/N): ";
    cin >> policyExpired;
    cout << "Does the driver have a valid licence? (Y/N): ";
    cin >> validLicence;
    cout << "Was the driver under the influence of alcohol? (Y/N): ";
    cin >> underInfluence;
    cout << "Was the driver responsible for the accident? (Y/N): ";
    cin >> responsible;
    cout << "Enter estimated damage amount (Rs.): ";
    cin >> damage;

    if (damage < 0) {
        cout << "Invalid damage amount.\n";
        return 0;
    }

    if (validInsurance == 'N' || validInsurance == 'n' ||
        policyExpired == 'Y' || policyExpired == 'y' ||
        validLicence == 'N' || validLicence == 'n' ||
        underInfluence == 'Y' || underInfluence == 'y') {
        cout << "Claim Status: Rejected\n";
        cout << "Reason: One or more mandatory claim conditions were not met.\n";
        cout << "Final payable amount: Rs. 0\n";
        return 0;
    }

    cout << "Claim Eligibility: Eligible\n";
    if (damage < 20000)
        cout << "Approval Requirement: Approved without inspection\n";
    else if (damage <= 200000)
        cout << "Approval Requirement: Physical inspection required\n";
    else
        cout << "Approval Requirement: Manager approval required\n";

    payable = damage;
    if (responsible == 'Y' || responsible == 'y') {
        payable *= 0.80;
        cout << "20% deduction applied because the driver was responsible.\n";
    } else {
        cout << "No responsibility deduction applied.\n";
    }

    cout << fixed << setprecision(2);
    cout << "Final payable insurance amount: Rs. " << payable << '\n';
    cout << "Note: For inspection/manager approval cases, payment is subject to that approval.\n";
    return 0;
}