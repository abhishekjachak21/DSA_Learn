// starting recursionn by stiver today 29 may 2024
#include<iostream>
using namespace std;









//-------------------------------------------------------------------------
//print name n times using recusrsion
void printNmTimes(string str,int n){

   if(n==0) return ;
   cout<<str<<"  ";
   n--;
   printNmTimes(str,n);        //(n-1)
}


int main(){
 
  printNmTimes("aryan",3);
  return 0;
}


//-------------------------------------------------------------------------





//-------------------------------------------------------------------------
// void printCnt(int a){

//     if(a== 0 ) return; //base case
//     cout<<a<<" ";
//     // a--;
//     printCnt(a-1);

// }

// int main(){
//   int g;cin>>g;
//   printCnt(g);
    
// }
//-------------------------------------------------------------------------





 
//take a reference of this example, 1 year back.
//-------------------------------------------------------------------------
//print N to 1  //Day-24 June 2023  //1st ever tried recursion consciously

// void printNto1(int n){                 //wrong
//     if(n==0) return ;
//     int ans = printNto1(n-1);
//     cout<<ans<<endl;
// }

// int main(){
//     cout<<"Print N to 1: ";
//     printNto1(10);
//     cout<<endl;
// }
///-----------------------------------------------------------------
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