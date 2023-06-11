#include<iostream>
#include<bits/stdc++.h>
using namespace std;

struct node{
    string data;
    node* next;
};
void printList(node* n){
    while(n!=NULL){
        cout<< n->data <<" ";
        n=n->next;
    }
}
int main(){

    node* head=new node();
    node* second=new node();
    node* third=new node();

    head->data="Jai";
    head->next=second;

    second->data="Shree";
    second->next=third;

    third->data="Ram";
    third->next=NULL;

    printList(head);
}

