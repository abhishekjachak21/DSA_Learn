#include <iostream>
using namespace std;

bool hasIdenticalDigits(int num) {
    int lastDigit = num % 10;
    int temp = num / 10;

    while (temp > 0) {
        int digit = temp % 10;
        if (digit != lastDigit)
            return false;
        temp /= 10;
    }

    return true;
}

int main() {
    int lowerLimit, upperLimit;

    cout << "Enter lower limit: ";
    cin >> lowerLimit;

    cout << "Enter upper limit: ";
    cin >> upperLimit;

    for (int num = lowerLimit; num <= upperLimit; num++) {
        if (hasIdenticalDigits(num)) {
            cout << num << " ";
        }
    }

    return 0;
}
