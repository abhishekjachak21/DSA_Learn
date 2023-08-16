#include <iostream>
#include <unordered_map>
#include <utility>
using namespace std;

int main() {
    // Using unordered_map
    unordered_map<string, int> ageMap;

    // Insert key-value pairs
    ageMap.insert(make_pair("Alice", 30));
    ageMap["Bob"] = 25;
    ageMap["Charlie"] = 35;

    // Access elements using keys
    cout << "Alice's age: " << ageMap["Alice"] << endl;
    cout << "Bob's age: " << ageMap.at("Bob") << endl;

    // Check if a key exists
    if (ageMap.find("Charlie") != ageMap.end()) {
        cout << "Charlie's age exists." << endl;
    }





    // Using pair
    pair<int, int> point = make_pair(3, 4);

    // Access elements using first and second members
    cout << "X-coordinate: " << point.first << ", Y-coordinate: " << point.second << endl;

    return 0;
}
