#include <iostream>
using namespace std;


class Stack {
private:
    int* arr;
    int SIZE, topIndex;

public:
    Stack(int s) {
        SIZE = s;
        arr = new int[SIZE];
        topIndex = -1; // Initialize the top index to -1
    }
    
    ~Stack() {
        delete[] arr; // Deallocate the dynamic array in the destructor
    }

    void push(int value) {
        if (topIndex == SIZE - 1) {
            cout << "Stack is full" << endl;
            return;
        }

        topIndex++;
        arr[topIndex] = value;
    }

    void pop() {
        if (topIndex == -1) {
            cout << "Stack is already empty" << endl;
            return;
        }

        topIndex--;
    }

    int top() {
        if (topIndex == -1) {
            cout << "Stack is empty." << endl;
            return -1; // Return -1 if stack is empty
        }

        return arr[topIndex];
    }

    bool isEmpty() {
        return topIndex == -1;
    }
/* If topIndex is -1, it means the stack is empty,
 so isEmpty() returns true.
If topIndex is not -1, it means the stack has=
 at least one element, so isEmpty() returns false. */       //shift+ctrl+A fot MultipleLineCmnt at once
   
    int size() {
        return topIndex + 1;
    }
};

int main() {
    Stack myStack(2);

    // Push elements onto the stack
    myStack.push(2);
    myStack.push(13);
    myStack.push(19);

    // Check if the stack is empty
    if (myStack.isEmpty()) {
        cout << "Stack is empty." << endl;
    } else {
        cout << "Stack is not empty,&  Size: " << myStack.size() << endl;
    }

    // Access the top element
    cout << "Top element of the stack: " << myStack.top() << endl;

    // Pop elements from the stack
    myStack.pop();
    cout << "After popping, the top element of the stack: " << myStack.top() << endl;

    // Push more elements onto the stack
    myStack.push(20);



    myStack.push(25);

    // Print the elements of the stack
    cout << endl << "Stack elements:" << endl;
    while (!myStack.isEmpty()) {
        cout << myStack.top() << endl;
        myStack.pop();
    }

    return 0;
}









/*
class Stack {
private:
    static const int SIZE = 100; // Maximum size of the stack
    int arr[SIZE];
    int topIndex;

public:
    Stack() {
        topIndex = -1; // Initialize the top index to -1
    }

    void push(int value) {
        if (topIndex == SIZE - 1) {
            cout << "Stack is full" << endl;
            return;
        }

        topIndex++;
        arr[topIndex] = value;
    }

    void pop() {
        if (topIndex == -1) {
            cout << "Stack is already empty" << endl;
            return;
        }

        topIndex--;
    }

    int top() {
        if (topIndex == -1) {
            cout << "Stack is empty." << endl;
            return -1; // Return -1 if stack is empty
        }

        return arr[topIndex];
    }

    bool isEmpty() {
        return topIndex == -1;
    }

    int size() {
        return topIndex + 1;
    }
};

int main() {
    Stack myStack;

    // Push elements onto the stack
    myStack.push(2);
    myStack.push(13);
    myStack.push(19);

    // Check if the stack is empty
    if (myStack.isEmpty()) {
        cout << "Stack is empty." << endl;
    } else {
        cout << "Stack is not empty,&  Size: " << myStack.size() << endl;
    }

    // Access the top element
    cout << "Top element of the stack: " << myStack.top() << endl;

    // Pop elements from the stack
    myStack.pop();
    cout << "After popping, the top element of the stack: " << myStack.top() << endl;

    // Push more elements onto the stack
    myStack.push(20);
    myStack.push(25);

    // Print the elements of the stack
    cout << endl << "Stack elements:" << endl;
    while (!myStack.isEmpty()) {
        cout << myStack.top() << endl;
        myStack.pop();
    }

    return 0;
}
*/