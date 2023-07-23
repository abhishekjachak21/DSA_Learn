#include <iostream>
using namespace std;

int countDigitThree(int n) {
    int count = 0;
    for (int i = 0; i <= n; i++) {
        int num = i;
        while (num > 0) {
            int digit = num % 10;
            if (digit == 3) {
                count++;
            }
            num /= 10;
        }
    }
    return count;
}

int main() {
    int n;
    cout << "Enter a number: ";
    cin >> n;
    int count = countDigitThree(n);
    cout << "Number of times digit 3 occurs: " << count << endl;
    return 0;
}
