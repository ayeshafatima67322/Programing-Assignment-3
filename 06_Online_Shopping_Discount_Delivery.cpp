#include <iostream>
#include <iomanip>
using namespace std;

int main() {
    double purchase, discountRate = 0, discount, amount, delivery, payable;
    char premium, unpaid;

    cout << "Enter purchase amount (Rs.): ";
    cin >> purchase;
    cout << "Premium member? (Y/N): ";
    cin >> premium;
    cout << "Any unpaid previous order? (Y/N): ";
    cin >> unpaid;

    if (purchase < 0) {
        cout << "Invalid purchase amount.\n";
        return 0;
    }

    if (unpaid == 'Y' || unpaid == 'y') {
        cout << "Order Status: Not Confirmed (previous order is unpaid).\n";
        return 0;
    }

    if (purchase > 50000) discountRate = 0.20;
    else if (purchase > 25000) discountRate = 0.15;
    else if (purchase > 10000) discountRate = 0.10;

    discount = purchase * discountRate;
    amount = purchase - discount;

    // Premium discount is applied after the purchase-based discount.
    if (premium == 'Y' || premium == 'y')
        amount -= amount * 0.05;

    delivery = (amount > 20000) ? 0 : 500;
    payable = amount + delivery;

    cout << fixed << setprecision(2);
    cout << "Order Status: Confirmed\n";
    cout << "Purchase-based discount: Rs. " << discount << '\n';
    cout << "Amount after discounts: Rs. " << amount << '\n';
    cout << "Delivery charges: Rs. " << delivery << '\n';
    cout << "Final payable amount: Rs. " << payable << '\n';
    return 0;
}