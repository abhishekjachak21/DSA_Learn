#include <iostream>
using namespace std;

int replaceZerosWithOnes(int num) {
    if (num == 0) {
        return 1;
    }
    int result = 0;
    int multiplier = 1;
    while (num > 0) {
        int digit = num % 10;
        if (digit == 0) {
            digit = 1;
        }
        result += digit * multiplier;
        multiplier *= 10;
        num /= 10;
    }
    return result;
}

int main() {
    int num;
    cout << "Enter an integer: ";
    cin >> num;
    int replacedNum = replaceZerosWithOnes(num);
    cout << "After replacing 0's with 1's: " << replacedNum << endl;
    return 0;
}
