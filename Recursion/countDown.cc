/*
Problem: Count Down
Description:
Write a recursive function that takes a positive integer n and prints the countdown from n to 1. Your function should also print "Blastoff!" after reaching 1.
*/
#include<bits/stdc++.h>
using namespace std;

void fun(int n) {
    if (n == 0) {
        cout << "Blastoff! ";
        return;
    }
    cout << n << " ";
    fun(n - 1);
}

int main() {
    int n;
    cin >> n;
    fun(n);
    cout << endl;

    return 0;
}



// int fun(int n){
//    if(n==1) {
//     cout<<"Blastoff! ";
//     return 1;}
//     cout<<n<<" ";
//     return fun(n-1);
// }



// int main(){
   
//    int n;cin>>n;
//    cout<<fun(n)<<endl;

//     return 0;
// }