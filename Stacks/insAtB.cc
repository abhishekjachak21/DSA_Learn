#include <iostream>
#include <stack>
using namespace std;


void insertAtInd(stack<int>&st, int idx, int value){

  stack<int> temp;
  int n=st.size();
  int count=0;

  while(count< n-idx){
    count++;
    int curr=st.top();
    temp.push(curr);
    st.pop();
  }
  st.push(value);
  
  while(! temp.empty()){
    int curr=temp.top();
    st.push(curr);
    temp.pop();
  }

}


void printStack(stack<int> tempStack) {
    while (!tempStack.empty()) {
        cout << tempStack.top() << " ";
        tempStack.pop();
    }
    cout << endl;
}

int main() {

    stack<int> myStack;

    // Push elements onto the stack
    myStack.push(1);
    myStack.push(2);
    myStack.push(3);
    myStack.push(4);
    myStack.push(5);
    myStack.push(6);
    myStack.push(7);

    int value = 115;

    cout << "Original stack: ";
    printStack(myStack);

    insertAtInd(myStack, 5 , value);

    cout << "Stack after inserting " << value << ": ";
    printStack(myStack);

    myStack.pop();
    cout << "Stack after deleting " << ": ";
    printStack(myStack);

    return 0;
}  







/* //pw lec 54
void insertAtBottom(stack<int>& st ,int d){

  stack<int > temp;
  while(! st.empty()){
    int curr=st.top();
    temp.push(curr);
    st.pop();
  }
  st.push(d);

  while(! temp.empty()){
    int curr=temp.top();
    st.push(curr);
    temp.pop();
  }

}


void printStack(stack<int> tempStack) {
    // stack<int> tempStack = stk;
    while (!tempStack.empty()) {
        cout << tempStack.top() << " ";
        tempStack.pop();
    }
    cout << endl;
}


int main() {

    stack<int> myStack;

    // Push elements onto the stack
    myStack.push(1);
    myStack.push(2);
    myStack.push(3);
    myStack.push(4);

    int value = 115;

    cout << "Original stack: ";
    printStack(myStack);

    insertAtBottom(myStack, value);

    cout << "Stack after inserting " << value << ": ";
    printStack(myStack);

    myStack.pop();
    cout << "Stack after deleting " << ": ";
    printStack(myStack);

    return 0;
}  */













// gpt ref for pw lec 54
/* void insertAtBottom(stack<int>& stk, int value) {
    if (stk.empty()) {
        stk.push(value);
        return;
    }

    int topElement = stk.top();
    stk.pop();
    insertAtBottom(stk, value);
    stk.push(topElement);
}

 
    cout << endl;
}

int main() {
    stack<int> myStack;

    // Push elements onto the stack
    myStack.push(1);
    myStack.push(2);
    myStack.push(3);
    myStack.push(4);

    int value = 5;

    cout << "Original stack: ";
    printStack(myStack);

    insertAtBottom(myStack, value);

    cout << "Stack after inserting " << value << ": ";
    printStack(myStack);

    return 0;
} */
