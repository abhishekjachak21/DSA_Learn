#include <iostream>
using namespace std;

int sumOfDigits(int num) {
    int sum = 0;
    while (num > 0) {
        int digit = num % 10;
        sum += digit;
        num /= 10;
    }
    return sum;
}

int main() {
    int num;
    cout << "Enter an integer: ";
    cin >> num;
    int sum = sumOfDigits(num);
    cout << "Sum of digits: " << sum << endl;
    return 0;
}
