// Implement stack using array

#include<bits/stdc++.h>
using namespace std;

#define MAX_SIZE 100

class Stack {
private:
    int arr[MAX_SIZE];
    int top;

public:
    // Constructor
    Stack() {
        top = -1; // Initialize top to -1 to indicate an empty stack
    }

    // Push operation to insert an element into the stack
    void push(int val) {
        if (top >= MAX_SIZE - 1) {
            cout << "Stack Overflow" << endl;
            return;
        }
        arr[++top] = val;
        cout << val << " pushed into stack" << endl;
    }

    // Pop operation to remove the top element from the stack
    void pop() {
        if (top < 0) {
            cout << "Stack Underflow" << endl;
            return;
        }
        int val = arr[top--];
        cout << val << " popped from stack" << endl;
    }

    // Utility function to check if the stack is empty
    bool isEmpty() {
        return top < 0;
    }

    // Utility function to get the top element of the stack without removing it
    int peek() {
        if (top < 0) {
            cout << "Stack is empty" << endl;
            return -1; // Return a default value indicating an empty stack
        }
        return arr[top];
    }
};

int main() {
    // Stack s;
    stack<int>s;

    s.push(1);
    s.push(2);
    s.push(3);

    // cout << "Top element: " << s.peek() << endl;
    cout << "Top element: " << s.top() << endl;

    s.pop();
    s.pop();

    // cout << "Top element: " << s.peek() << endl;
    cout << "Top element: " << s.top() << endl;

    s.pop();
    s.pop(); // Trying to pop from an empty stack

    return 0;
}

