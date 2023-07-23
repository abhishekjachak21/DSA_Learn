#include <iostream>
#include <stack>
using namespace std;
                                   //#LIFO
int main() {

    stack<int> myStack;

    // Push elements onto the stack
    myStack.push(5);
    myStack.push(10);
    myStack.push(12);
    myStack.push(15);

    // Check if the stack is empty
    if (myStack.empty()) {
        cout << "Stack is empty." << endl;
    } else {
        cout << "Stack is not empty,  Size: " << myStack.size() << endl;
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
    cout << "\nStack elements:" << endl;
    while (!myStack.empty()) {
        cout << myStack.top() << endl;
        myStack.pop();
    }

    return 0;
}
