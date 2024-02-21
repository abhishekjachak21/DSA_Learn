#include <iostream>
#include <queue> // Include the priority_queue header
using namespace std;


int main() {
    // Define a priority queue of integers
    priority_queue<int> pq;

    // Insert elements into the priority queue
    pq.push(30);
    pq.push(10);
    pq.push(50);
    pq.push(20);

    // Print the elements of the priority queue
    cout << "Priority Queue elements:";
    while (!pq.empty()) {
        cout << ' ' << pq.top(); // Access the highest priority element
        pq.pop(); // Remove the highest priority element
    }
    cout << endl;

    return 0;
}
