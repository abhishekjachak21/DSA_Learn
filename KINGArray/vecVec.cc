#include <iostream>
#include <vector>
#include <string>

using namespace std;

int main() {
    vector<vector<string>> v;

    // Adding elements to the vector
    vector<string> group1 = {"apple", "pale", "leap"};
    vector<string> group2 = {"cat", "act", "tac"};
    vector<string> group3 = {"dog", "god"};
    
    v.push_back(group1);
    v.push_back(group2);
    v.push_back(group3);

    // Accessing elements from the vector
    for (auto group : v) {
        for (auto str : group) {
            cout << str << " ";
        }
        cout << endl;
    }

    return 0;
}
