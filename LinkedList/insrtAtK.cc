#include <iostream>
using namespace std;

//chatGPT ka kamaal

class Node {
public:
    int data;
    Node* next;
    
    Node(int d) {
        data = d;
        next = NULL;
    }
};

Node* insertAtK(Node* head, int data, int k) {
    Node* newNode = new Node(data);
    
    if(k == 1) {
        newNode->next = head;
        head = newNode;
        return head;
    }
    
    Node* temp = head;
    for(int i = 1; i < k - 1 && temp != NULL; i++) {
        temp = temp->next;
    }
    
    if(temp == NULL) {
        cout << "Invalid position" << endl;
        return head;
    }
    
    newNode->next = temp->next;
    temp->next = newNode;
    
    return head;
}

void display(Node* head) {
    Node* temp = head;
    while(temp != NULL) {
        cout << temp->data << " ";
        temp = temp->next;
    }
    cout << endl;
}

int main() {
    Node* head = NULL;
    head = insertAtK(head, 10, 1);
    head = insertAtK(head, 20, 2);
    head = insertAtK(head, 30, 3);
    head = insertAtK(head, 40, 4);
    head = insertAtK(head, 50, 5);
    head = insertAtK(head, 60, 6);
    head = insertAtK(head, 70, 7);
    
    display(head);  // output: 10 20 30 40 50 60 70
    
    head = insertAtK(head, 25, 3);
    display(head);  // output: 10 20 25 30 40 50 60 70
    
    head = insertAtK(head, 100, 7);  // invalid position
    display(head);  // output: 10 20 25 30 40 50 60 70
    
    return 0;
}
