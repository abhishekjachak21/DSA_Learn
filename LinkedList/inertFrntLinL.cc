#include <iostream>
using namespace std;

// Linked list Node 
struct node{
    int data;
    node *next;
};

// Print the Linked List  
void printList (node *n){
    while(n!=NULL){
        cout<<n->data<<endl;
        n = n->next;
    }
}

//node *push(node *head , int newData){
//    node *newNode = new node();
//    newNode -> data = newData;
//    newNode -> next = head;
//    head = newNode;
//    return head;
//}

void push(node **head_ref , int newData){
    node *newNode = new node();
    newNode -> data = newData;
    newNode -> next = *head_ref;
    *head_ref = newNode;
}

int main(){
   
    node *head = NULL;
    push(&head , 57);
    push(&head , 74);
    push(&head , 44);
    
    printList(head);
    
}
