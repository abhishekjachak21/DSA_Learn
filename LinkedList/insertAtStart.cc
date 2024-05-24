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
        cout<<temp->val;
        temp=temp->next;
        if (temp != NULL) {
            cout << " -> ";
        }

    }
    cout << endl;
    // cout<<"NULL"<<endl;
}



//starting from nothing
int main(){
 
 Node* head=NULL;

 insAtStart(head,15);
 print(head);

 insAtStart(head,10);
 print(head);

 insAtStart(head,5);
 insAtStart(head,4);
 insAtStart(head,23);
 insAtStart(head,61);
 insAtStart(head,98);
 print(head);
   

}



/* int main(){
 
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
   

} */