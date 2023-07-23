#include <iostream>
#include <cstring>
using namespace std;

void reverseString(char* str) {
    int length = strlen(str);
    for (int i = 0, j = length - 1; i < j; i++, j--) {
        char temp = str[i];
        str[i] = str[j];
        str[j] = temp;
    }
}

int main() {
    char str[100];
    cout << "Enter a string: ";
    cin.getline(str, 100);
    reverseString(str);
    cout << "Reversed string: " << str << endl;
    return 0;
}
