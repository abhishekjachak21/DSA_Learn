#include <iostream>
using namespace std;

int linearSearch(int arr[], int n, int key) {
    for (int i = 0; i < n; i++) {
        if (arr[i] == key) {
            return i;
        }
    }
    return -1; // Key not found
}

int main() {
    int arr[] = {5, 10, 15, 20, 25, 30};
    int n = sizeof(arr) / sizeof(arr[0]);
    int key;
    cout << "Enter the key to search: ";
    cin >> key;
    int index = linearSearch(arr, n, key);
    if (index != -1) {
        cout << "Key found at index " << index << endl;
    } else {
        cout << "Key not found" << endl;
    }
    return 0;
}
