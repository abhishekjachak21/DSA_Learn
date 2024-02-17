#include <iostream>
using namespace std;

// Node class
class Node {
public:
    int data;
    Node* next;

    // Constructor
    Node(int data) {
        this->data = data;
        this->next = nullptr;
    }
};

// Solution class
class Solution {
public:
    void display(Node* head) {
        // Your code goes here
        while (head != nullptr) {
            cout << head->data << " ";
            head = head->next;
        }

        // Node* temp = head;
        // while (temp != nullptr) {
        //     cout << temp->data << " ";
        //     temp = temp->next;
        // }
    }
};

int main() {
    // Example usage
    Node* head = new Node(11);
    head->next = new Node(24);
    head->next->next = new Node(83);

    Solution solution;
    solution.display(head);

    return 0;
}
