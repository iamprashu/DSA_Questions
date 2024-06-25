#include <iostream>
using namespace std;

int main() {
    int invested, numberofpayment;
    float rate;

    // Reading input from the user
    cout << "Enter the amount invested: ";
    cin >> invested;
    cout << "Enter the interest rate per period (as a decimal): ";
    cin >> rate;
    cout << "Enter the number of payment periods: ";
    cin >> numberofpayment;

    // Calculating the future value of the investment
    long ans = invested * (((1 + rate) * numberofpayment - 1) / rate) * (1 + rate);

    // Displaying the result
    cout << "Future value of the investment: " << ans << endl;

    return 0;
}
