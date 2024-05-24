#include<iostream>
using namespace std;


//started again LL ->March 2024, again May 2024 & now will not break this chain for nxt 15 days(till 30may)
//last time it was April 2023
class node{
 public:
 int val;
 node* nxt;

 node(int data){
    val=data;
    nxt=NULL;
 }

};


int main(){
    
   node* n=new node(12);
   node* n2=new node(24);
   node* n3=new node(36);
   node* n4=new node(48);

   n->nxt=n2;
   n2->nxt=n3;
   n3->nxt=n4;
   n4->nxt=NULL;

   cout<<"Value: "<<n->val<<
            " "<<n->nxt<<
            " "<<n2->val<<
            " "<<n2->nxt<<
            " "<<n3->val<<
            " "<<n3->nxt<<
            " "<<n4->val<<
            " "<<n4->nxt<<endl;


    return 0;
}



// OP:
// Value: 12 0x55edf1f7bed0 24 0x55edf1f7bef0 36 0x55edf1f7bf10 48 0