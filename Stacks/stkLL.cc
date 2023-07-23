#include <iostream>
using namespace std;


class Node {
public:
    int data;
    Node* next;

    Node(int value) {
        data = value;
        next = nullptr;
    }
};

class Stack {
private:
    Node* top;
    int siz;

public:
    Stack(int s) {
        siz = s;
        top = nullptr;
    }

    void push(int value) {
        if (size()-1 == siz) {
            cout << "Stack is full,can't push " << value << endl;
            return;
        }

        Node* newNode = new Node(value);
        newNode->next = top; //connecting to top 
        top = newNode; //and becoming top ....then updating top
    }

    void pop() {
        if (isEmpty()) {
            cout << "Stack is already empty" << endl;
            return;
        }

        Node* temp = top;
        top = top->next;
        delete temp;
    }

    int getTop() {
        if (isEmpty()) {
            cout << "Stack is empty." << endl;
            return -1; // Return -1 if stack is empty
        }

        return top->data;
    }

    bool isEmpty() {
        return top == nullptr;
    }

    int size() {
        int count = 0;  //if 0 then will become 0-based indexing
        Node* current = top;
        while (current != nullptr) {
            count++;
            current = current->next;
        }
        return count;
    }
};

int main() {

    Stack myStack(2);

    // Push elements onto the stack
    myStack.push(2);
    myStack.push(13);
    myStack.push(19);
    myStack.push(19);

    // Check if the stack is empty
    if (myStack.isEmpty()) 
        cout << "Stack is empty." << endl;
    else 
        cout << "Stack is not empty, Size: " << myStack.size() << endl;
    

    // Access the top element
    cout << "Top element of the stack: " << myStack.getTop() << endl;

    // Pop elements from the stack
    myStack.pop();
    cout << "After popping, the top element of the stack: " << myStack.getTop() << endl;

    // Push more elements onto the stack
    myStack.push(20);
    myStack.push(25);

    // Print the elements of the stack
    cout << endl << "Stack elements:" << endl;

    while (!myStack.isEmpty()) {
        cout << myStack.getTop() << endl;
        myStack.pop();
    }
    cout << "\nSize: " << myStack.size() << endl;                   ///size ka chakkar babu bhaiya
                                                                  // solve it after later

    return 0;
}
