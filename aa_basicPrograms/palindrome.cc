
//Q->Why string is showing palindrome
#include<iostream>
using namespace std;

int palind(int n){
   int temp=n, rev=0, rem=0; 
   while(temp!=0){
      rem=temp%10;
      rev=rev*10+rem;
      temp=temp/10;
   }

   if(rev==n) {
      return 1;
   } else {
      return 0;
   }
}

int main(){
   int n;
   cout<<"Enter no: "; 
   cin>>n;
   if(palind(n)==1) {
      cout<<"Its Palindrome"<<endl;
   } else {
      cout<<"Its Not Palindrome"<<endl;
   }
   return 0;
}


// #include<iostream>
// using namespace std;

//  int n;
//    int temp=n,rev=0,rem=0; 
// int palind(int n){
//     while(temp!=0){
//    rem=temp%10;
//    rev=rev*10+rem;
//    temp=temp/10;
//    }

//    if(rev==n)  return 1;
//    else if(rev!=n) return 0;

// }

// int main(){

//    cout<<"Enter no: ";cin>>n;
//    palind(n);
   
//    return 0;
// }

