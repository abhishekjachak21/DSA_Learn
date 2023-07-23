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

void insAtStart(Node* &head,int val){
     
    Node* newNode=new Node(val);
    newNode->next=head;
    head=newNode;
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

//   cout<<head->val<<"->"
//       <<n1->val<<"->"
//       <<n2->val<<"->"
//       <<n3->val<<"->"
//       <<"NULL"<<endl;

 insAtStart(head,1);
 print(head);

 insAtStart(head,000000);
 print(head);
   

}