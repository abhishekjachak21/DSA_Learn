#include <iostream>
#include <unordered_map>
using namespace std;

void countFrequency(int arr[], int n) {
    unordered_map<int, int> frequencyMap;
    for (int i = 0; i < n; i++) {
        frequencyMap[arr[i]]++;
    }
    cout << "Element Frequency" << endl;
    for (auto it = frequencyMap.begin(); it != frequencyMap.end(); it++) {
        cout << it->first << "\t" << it->second << endl;
    }
}

int main() {
    int arr[] = {1, 2, 3, 2, 1, 3, 4, 5, 4, 4};
    int n = sizeof(arr) / sizeof(arr[0]);
    countFrequency(arr, n);
    return 0;
}
