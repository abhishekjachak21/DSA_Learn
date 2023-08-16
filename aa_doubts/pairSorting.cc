#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;


int main() {
    vector<pair<int, int>> points;

    // Add points to the vector
    points.push_back(make_pair(2, 5));
    points.push_back(make_pair(1, 3));
    points.push_back(make_pair(9, 1));
    points.push_back(make_pair(1, 1));
    points.push_back(make_pair(2, 4));

    // Sort the points based on the first element (x-coordinate)
    sort(points.begin(), points.end());

    // Print the sorted points
    cout << "Sorted points based on x-coordinate:" << endl;
    for (auto point : points) {
        cout << "(" << point.first << ", " << point.second << ")" << endl;
    }

    // Sort the points based on the second element (y-coordinate)
    sort(points.begin(), points.end(), [](auto a, auto b) {
        return a.second < b.second;
    });

    // Print the sorted points
    cout << "\nSorted points based on y-coordinate:" << endl;
    for (auto point : points) {
        cout << "(" << point.first << ", " << point.second << ")" << endl;
    }

    return 0;
}
