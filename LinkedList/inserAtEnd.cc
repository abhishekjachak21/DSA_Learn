#include<iostream>
using namespace std;

//1pm,23 July 2023
class Node{
  public:
  int val;
  Node* next;

  Node(int data){
    val=data;
    next=NULL;
  }
};

void insAtEnd(Node* &head,int val){
     
    Node* newNode=new Node(val);

    Node* temp=head;  

    while(temp->next!=NULL)
        temp=temp->next;
    
    temp->next=newNode;

    newNode->next=NULL;
}

void print(Node* head){
    
    Node* temp= head;
    while(temp!=NULL){
        cout<<temp->val<<"->";
        temp=temp->next;
    }
    cout<<"NULL"<<endl;
}

int main(){
 
  Node* head=new Node(2);
 
  Node* n1=new Node(10);
  head->next=n1;
  
  Node* n2=new Node(13);
  n1->next=n2;

  Node* n3=new Node(8*2);
  n2->next=n3;
  
  print(head);

 insAtEnd(head,17);
 print(head);

 insAtEnd(head,18);
 print(head);
   

}

//starting from nothing
// int main(){
 
//  Node* head=NULL;

//  insAtStart(head,15);
//  print(head);

//  insAtStart(head,10);
//  print(head);

//  insAtStart(head,5);
//  print(head);
   

// }