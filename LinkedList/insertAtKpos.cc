#include<iostream>
using namespace std;


//23 July 2023
class Node{
  public:
  int val;
  Node* next;

  Node(int data){
    val=data;
    next=NULL;
  }
};

// void insAtStart(Node* &head,int val){
     
//     Node* newNode=new Node(val);
//     newNode->next=head;
//     head=newNode;
// }

void insAtK(Node* &head,int k,int val){
  
    // if(k==1){
    //   insAtStart(head,val);
    //   return;                //return likhna bhul gya tha..silly mistake
    // }

    //OR or
 Node* newNode=new Node(val);

        if (k == 1) {
        newNode->next = head;
        head = newNode;
        return;
    }
    
   

    Node* temp=head;  

    int currPos=0;
    while(currPos!=k-2){
        temp=temp->next;
        currPos++;
        
    }

 // newNode->next=temp->next->next; 
    newNode->next=temp->next; 

    temp->next=newNode;

    // newNode->next=temp->next->next;
    // newNode->next=temp->next;
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
 insAtK(head,2,22);
 print(head);

 insAtK(head,3,23);
 print(head);

 insAtK(head,1,89);
 print(head);
   

}