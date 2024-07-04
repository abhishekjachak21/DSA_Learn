#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

static bool comp(pair<char, int> y, pair<char, int> x) {
    return x.second > y.second;
}

int main() {
    vector<pair<char, int>> vec = { {'a', 3}, {'b', 1}, {'c', 4}, {'d', 2} };
    
    // Sorting the vector using the custom comparator
    sort(vec.begin(), vec.end(), comp);
    
    // Printing the sorted vector
    for (auto &p : vec) {
        cout << p.first << " " << p.second << endl;
    }
    
    return 0;
}
