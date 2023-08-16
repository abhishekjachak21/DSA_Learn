
#include<iostream>
using namespace std;

class Node{
  public:
  int val;
  Node* next;

  Node(int data){
    val=data;
    next=NULL;
  }
};

void updateAtK(Node* &head,int k,int val){

    Node* temp=head;  

    int currPos=0;
    while(currPos!=k-1){
        temp=temp->next;
        currPos++;
    }

    temp->val=val;
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
 cout<<"\nafter modification:"<<endl;
 updateAtK(head,2,22);
 print(head);

 updateAtK(head,4,23);
 print(head);
   

}