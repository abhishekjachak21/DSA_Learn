#include<iostream>
using namespace std;

int main(){

    int n;
    cin>>n;
   int ori=n,rev;
    while(n>0){
        int num=n%10;
        rev= rev*10 + num ;
        n /= 10;
    }
   cout<<"Rev no: "<<rev<<endl;

}