#include<bits/stdc++.h>
using namespace std;

int factorial(int n){
    if(n<=1) return 1;
    int fact = factorial(n-1)*n;
    return fact;
}

int main(){
    int n; cin>>n;
    cout<<" Factorial: "<<factorial(n)<<endl;
    return 0;
}