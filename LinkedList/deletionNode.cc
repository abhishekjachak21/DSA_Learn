#include<iostream>
using namespace std;


///------------------------------------------------------
//deletion at head & end,at kth position,updation of kth node
class node{
    public:
    int val;
    node* next;

    node(int data){
        val=data;
        next=NULL;
    }
};

void insertAtHead(node* &head,int d){    //insert value at head
     
    node* newNode = new node(d);     //d->data->val .....  newNode[val:next] ....val=d
    newNode -> next =head;            //newNode[val:next] ....next=head address
    head=newNode;                    //now,its new head pointing to newNode
 
    }
void insertAtTail(node* &head,int d){    //insert value at end

    node* newNode=new node(d);
    node*temp=head;
    while(temp->next!=NULL){
        temp=temp->next;
    }
    temp->next=newNode;
    newNode->next=NULL;    //we may not write this tep,bcs next=NULL,we defined in class{}.

}

void insAny(node* &head,int d,int p){     //why &head??
    
    if(p==0){
        insertAtHead(head,d);   //if &head is not parameter,this doesnt works properly,what is 
        // display(head);       //the significance of this &....????
        return;
    }
    node* newNode=new node(d);
    node*temp=head;
    int currPos=0;
    while(currPos!=p-1){
        temp=temp->next;
        currPos++;
    }
    newNode->next=temp->next;
    temp->next=newNode;
}

void updatePos(node*head,int d,int k){            //update value of kth position
 
    node* temp=head;
    int currPos=0;
    while(currPos!=k){
        temp=temp->next;
        currPos++;
    }
    temp->val=d;
}

void deleteH(node* &head){          //head deletion of node
    node*temp=head;
    head=head->next;
    free(temp);
}

void deleteT(node*head){           //tail deletion of node
    node*temp=head;
    while(temp->next->next != NULL){
        temp=temp->next;
    }
    free (temp->next->next);
    temp->next=NULL;
    // free (temp->next->next);
}

void deleteKth(node* head, int k){
    node* prev=head;
    int currPos=0;  
    while(currPos!=k-1){     //i was comparing (prev!=k) pointer with int before 
        prev=prev->next;
        currPos++;
    }
   node* temp=prev->next;
   prev->next=prev->next->next;    //this is whole code after doing 10 mistakes
   free(temp);
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
 insertAtHead(head,34);
  display(head);
  insertAtHead(head,654);
  display(head);
 insertAtTail(head,84);
  display(head);
  insertAtTail(head,480);
  display(head);
  insAny(head,657,2);
  display(head);
   insAny(head,71,2);
  display(head);
  updatePos(head,365,2);
  display(head);
  deleteH(head);
  display(head);
  deleteT(head);
  display(head);
  deleteKth(head,1);
  display(head);

}
//------------------------------------------------------


/*
//------------------------------------------------------
//insertion at end,at kth position,updation of kth node
class node{
    public:
    int val;
    node* next;

    node(int data){
        val=data;
        next=NULL;
    }
};

void insertAtHead(node* &head,int d){    //insert value at head
     
    node* newNode = new node(d);     //d->data->val .....  newNode[val:next] ....val=d
    newNode -> next =head;            //newNode[val:next] ....next=head address
    head=newNode;                    //now,its new head pointing to newNode
 
    }
void insertAtTail(node* &head,int d){    //insert value at end

    node* newNode=new node(d);
    node*temp=head;
    while(temp->next!=NULL){
        temp=temp->next;
    }
    temp->next=newNode;
    newNode->next=NULL;    //we may not write this tep,bcs next=NULL,we defined in class{}.

}

void insAny(node* &head,int d,int p){     //why &head??
    
    if(p==0){
        insertAtHead(head,d);   //if &head is not parameter,this doesnt works properly,what is 
        // display(head);       //the significance of this &....????
        return;
    }
    node* newNode=new node(d);
    node*temp=head;
    int currPos=0;
    while(currPos!=p-1){
        temp=temp->next;
        currPos++;
    }
    newNode->next=temp->next;
    temp->next=newNode;
}

void updatePos(node*head,int d,int k){            //update value of kth position
 
    node* temp=head;
    int currPos=0;
    while(currPos!=k){
        temp=temp->next;
        currPos++;
    }
    temp->val=d;
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
 insertAtHead(head,34);
  display(head);
 insertAtHead(head,22);
  display(head); 
 insertAtTail(head,84);
  display(head);
   insertAtHead(head,115);
  display(head);
  insAny(head,657,2);
  display(head);
  insAny(head,255,0);
  display(head);
  updatePos(head,365,3);
  display(head);
}
//------------------------------------------------------
*/