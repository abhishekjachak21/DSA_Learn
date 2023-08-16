#include <iostream>
using namespace std;  //23 July 2023

class node{
    public:
    int val;
    node* next;

    node(int data){
        val=data;
        next=NULL;
    }
};

void insertAtHead(node* &head,int d){
     
    node* newNode = new node(d);
    newNode -> next =head; 
    head=newNode; 
 
    }

void deleteAtHead(node* & head)
{
    node* temp=head;
    head=temp->next;
    free(temp);
}    

void deleteAtEnd(node* &head){
    node* temp=head;
    while(temp->next->next!=NULL){
        temp=temp->next;
    }

    // temp->next=NULL;   //but why? idk ?
    free(temp->next->next);
        temp->next=NULL;

}

void display(node* head){

    node* temp= head;
    while(temp!=NULL){
        cout<<temp->val<<"->";
        temp=temp->next;
    }
    cout<<"NULL"<<endl;
}

int main(){
 
 node*head = NULL;
 insertAtHead(head,12);
  display(head);
 insertAtHead(head,24);
  display(head); 
   insertAtHead(head,36);
  display(head); 
   insertAtHead(head,48);
  display(head); 
   insertAtHead(head,60);
  display(head); 

  deleteAtHead(head);
  display(head);

  deleteAtEnd(head);
  display(head);

}