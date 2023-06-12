#include<bits/stdc++.h>
#include<iostream>
using namespace std;


/*
//Q=> check if all alphabets are present

bool checkAllAlphabetes(string s){

if(s.size()<26) return false;

//function to make equal changes for whole  
// transform(first1, last1, first2, result, op);
transform(s.begin(),s.end(),s.begin(),::tolower);

set<char>ch;
   for(auto ele:s)
   ch.insert(ele);

   return(ch.size()==26);

}


int main(){

    string input;
    cin>>input;

    if(checkAllAlphabetes(input))
    cout<<"Yes";
    else cout<< "Nope";

}
*/





//Q=>  2 vec, find common ele, and return sum
/*
int main(){

    int n,m;
    cout<<"Enter sizes of vec: ";
    cin>>n>>m;

    vector<int>v1(n);
    vector<int>v2(m);

    cout<<"Enter ele in v1: ";
    for(int i=0;i<n;i++) cin>>v1[i];
     cout<<"Enter ele in v2: ";
    for(int i=0;i<m;i++) cin>>v2[i];

    set<int>s1;
    for(auto ele:v1)
    s1.insert(ele);

    int ansSum=0;

    for(auto ele:v2)
    if(s1.find(ele)!=s1.end()) ansSum += ele;

    cout<<"ans: "<<ansSum<<endl;

    return 0;
}
*/