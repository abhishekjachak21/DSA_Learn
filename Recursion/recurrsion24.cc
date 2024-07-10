#include<iostream>
using namespace std;

int oneToN(int i){
    if(i<1) return 1;
    oneToN(i-1);
    cout<< i <<' ';
    return i;
}
// void oneToN(int i){
//     if(i<1) return ;
//     oneToN(i-1);
//     cout<< i <<' ';
// }


int main(){
    int n; cin>>n;
    cout<<"Print 1 to N: ";
    oneToN(n);

    return 0;
}