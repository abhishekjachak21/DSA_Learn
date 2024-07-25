#include<bits/stdc++.h>
using namespace std;

int power(int x, int n){
   if(x>0 && n==0) return 1;
   int pow = power(x, n-1) * x;
   return pow;
}

int main(){
    int x,n; cin >> x >> n;
    cout<<"Power: "<<power(x,n)<<endl;
}