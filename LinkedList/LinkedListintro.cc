#include<iostream>
using namespace std;


class node{
    public:
    int value;
    node* next;

    node(int data){
        value = data;
        next = NULL;
    }
};


int main(){

   node* node1=new node(12);
   node* node2=new node(14);
   node* node3=new node(17);

   cout<<node1->value<<"->"
       <<node2->value<<"->"
       <<node3->value<<endl;

}