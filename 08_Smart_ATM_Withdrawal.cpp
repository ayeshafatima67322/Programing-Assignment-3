#include <iostream>
using namespace std;

int main() {
    double balance, withdrawal, dailyWithdrawn;
    char blocked;

    cout << "Enter account balance (Rs.): ";
    cin >> balance;
    cout << "Enter withdrawal amount (Rs.): ";
    cin >> withdrawal;
    cout << "Enter amount already withdrawn today (Rs.): ";
    cin >> dailyWithdrawn;
    cout << "Is account blocked? (Y/N): ";
    cin >> blocked;

    if (balance < 0 || withdrawal < 0 || dailyWithdrawn < 0) {
        cout << "Invalid input.\n";
        return 0;
    }

    if (blocked == 'Y' || blocked == 'y') {
        cout << "Transaction Rejected: Account is blocked.\n";
    } else if (withdrawal < 500) {
        cout << "Transaction Rejected: Minimum withdrawal is Rs. 500.\n";
    } else if (static_cast<long long>(withdrawal) % 500 != 0) {
        cout << "Transaction Rejected: Amount must be a multiple of Rs. 500.\n";
    } else if (withdrawal > balance) {
        cout << "Transaction Rejected: Insufficient balance.\n";
    } else if (dailyWithdrawn + withdrawal > 100000) {
        cout << "Transaction Rejected: Daily limit of Rs. 100,000 exceeded.\n";
    } else {
        cout << "Transaction Allowed.\n";
        if (withdrawal > 50000)
            cout << "Additional verification is required.\n";
        cout << "Remaining account balance: Rs. " << balance - withdrawal << '\n';
        cout << "Remaining daily withdrawal limit: Rs. "
             << 100000 - (dailyWithdrawn + withdrawal) << '\n';
    }
    return 0;
}