#include<iostream>
using namespace std;



//-----------------------------------------------------------------
//print 1 to N
// void printNto1(int n){                 //2nd try ..and will continue further
//     if(n==0) return ;
//     printNto1(n-1);
//    cout<< n << endl;
//     // printNto1(n-1);
// }
// int main(){
//     cout<<"Print 1 to N: "<<endl;
//     printNto1(3);
// }
//------------------------------------------------------------------








//-------------------------------------------------------------------------
//print N to 1  //Day-24 June 2023  //1st ever tried recursion consciously
/*
void printNto1(int n){                 //wrong
    if(n==0) return ;
    int ans = printNto1(n-1);
    cout<<ans<<endl;
}

int main(){
    cout<<"Print N to 1: ";
    printNto1(10);
    cout<<endl;
}
*///-----------------------------------------------------------------
// void printNto1(int n){                 //2nd try ..and will continue further
//     if(n==0) return;
//    cout<< n << endl;
//     printNto1(n-1);
// }
// int main(){
//     cout<<"Print N to 1: "<<endl;
//     printNto1(10);
// }
//------------------------------------------------------------------








// //-------------------------------------------------------------------------
//factorial using recursion  //Day- 16 June 2023
// int f(int n){
//     if(n==0) return 1;

//     int ans=n*f(n-1);
//     return ans;
// }

// int main(){
   
//     int recursion=f(5);
//    cout<<"Ans: "<<recursion<<endl;
  
//     return 0;
// }

// //-------------------------------------------------------------------------






// //-------------------------------------------------------------------------
// //Recursion Day1 - 21 Jan 2022
// int sum(int n){
//     if (n==1) return 1;
//     int partialAns=sum(n-1);
//     return (n*partialAns);
// }
// int main(){
   
//    cout<< "Enter n: ";int n;cin>>n;
//    cout<<"YourSum: "<<sum(n)<<endl;
// }
//-------------------------------------------------------------------------





// //-------------------------------------------------------------------------
// //Fibonacci series=>    0 1 1 2 3 5 8 13 21 34 55 89
int fibo(int n){
    if(n==0 || n==1) return n;
    // if( n==2) return 1;
    int pA1=fibo(n-1);
    int pA2=fibo(n-2);
    // return (fibo(n-1)+fibo(n-2));
    return (pA1+pA2);
}

int main(){
   cout<< "Enter n: ";int n;cin>>n;
   int result = fibo(n);
   cout<<"Your Fibonacci: "<<result<<endl;
}
// //-------------------------------------------------------------------------