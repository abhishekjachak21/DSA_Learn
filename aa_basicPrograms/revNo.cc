#include<iostream>
using namespace std;

int main(){
    int n;
    cout<<"Enter no: ";cin>>n;
    int temp = 0;

    while(n!=0){
        int rem = n % 10;       // get the last digit of n
        temp = temp * 10 + rem; // add the last digit to the end of temp
        n /= 10;                // remove the last digit from n
    }

    cout<<"Reverse: "<<temp<<endl;
    return 0;
}
//temp*10..10 use kiya bcz it helps to shift by 1


// int main(){
//     int n;
//     cout<<"Enter no ";cin>>n;
// int temp=0;
//     for(int i=n;i>=0;i--){
//         temp=i+temp;
//          i%=10;
//     }
//     cout<<"Reverse: "<<temp;
// }
