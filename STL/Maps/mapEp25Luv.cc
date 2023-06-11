#include<bits/stdc++.h>
using namespace std;


////-----------------------------------------------
int main(){
  map<string,int>m;
  int n;cin>>n;
  for(int i=0;i<n;i++){
    string s;
    cin>>s;
    m[s]++;
  }

  for(auto str:m)
  cout<<str.first<<" "<<str.second<<endl;
}



////-----------------------------------------------






////-----------------------------------------------
//maps with fun,with auto....
// void print(map<int,string>&m1){
  
//     for(auto y=m1.begin();y!=m1.end();y++)
//       cout<<(y->first)<<" "<<(y->second)<<endl;
 
//     cout<<endl; 
// }

// int main(){
//     map<int,string>m1;
//     m1[2]="RAM";
//     m1[3]="HANUMAN";
//     m1[5]="And DHARM";         //O(logn)
//     m1[4]="KRISHNA";
//     m1.insert({1,"SITA"});
//     print (m1);
//     auto it=m1.find(4);  //O(logn)
//     if(m1.end()==it) cout<<"NO VALUE\n";
//     else cout<< it->first <<" "<<it->second <<endl;

//     return 0;
// }
// ////-----------------------------------------------



////-----------------------------------------------
//maps without fun,with auto....
// int main(){

//     map<int,string>m1;
//     m1[2]="RAM";
//     m1[3]="HANUMAN";
//     m1[5]="and DHARM";
//     m1[4]="KRISHNA";
//     m1.insert({1,"SITA"});

//     // map<int,string> :: iterator y;
//     for(auto y=m1.begin();y!=m1.end();y++)
//       cout<<(y->first)<<" "<<(y->second)<<endl;
//     // for(it=m1.begin();it!=m1.end();it++)
//     //   cout<<(it->first)<<" "<<(it->second)<<endl;
//     cout<<endl; 

//     return 0;
// }
////-----------------------------------------------