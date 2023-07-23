#include<bits/stdc++.h>
using namespace std;



int f(int n){
    if(n>=0 && n<=9) return n;
    return f(n/10) + n%10;
}


//recursive approach
int main(){
    int n;
    cout<<"Enter no: ";
    cin>>n;
    int sum = f(n);
    cout<<"Sum of digit: " << sum << endl;
}







// // iterative approach
// int main(){
//     int n;
//     cout<<"Enter no: ";
//     cin>>n;
//     int sum=0;
//     // for(int i=0;i<3;i++){
//     //    sum += n%10 ;
//     // }
//     int temp=n;
//     while(temp != 0){
//         sum += temp%10;   //pieces of temp
//         temp = temp/10;  //dec temp
//     }
//     cout<<"Sum of digit: " << sum << endl;
// }