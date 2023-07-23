#include<bits/stdc++.h>
using namespace std;


int f(int p,int q){
   
   if(p>0 && q==0) return 1;
//    int ans = p*q;
//    return f(p,q-1);
    int ans = p*f(p,q-1);
    return ans;

}


//recursive approach
int main(){
   int p,q;
   cout<<"Enter p & q: ";cin>>p>>q;

   int result = f(p,q);

   cout<<"Result: "<<result<<endl;
}
