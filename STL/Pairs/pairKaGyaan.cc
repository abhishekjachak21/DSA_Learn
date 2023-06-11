#include<bits/stdc++.h>
using namespace std;

//pairs comeBack -29 jann 2023
//-------------------------
int main(){
    // vector<int>v={2,3,4};
    vector<pair<int,int>> vop={{1,97},{2,94},{3,90}};
    vector<pair<int,int>>::iterator it;
    // for(it=vop.begin();it<vop.end();it++)
    //     cout<<(*it).first<<" "<< (*it).second<<endl;
    for(it=vop.begin();it<vop.end();it++)    
        cout<< (it->first)<<" " << (it->second)<<endl;   //MyFavOperator "->"
    


}
//-------------------------






////#Nested in vectors
//------------
// int main(){
   
//   vector< pair<int,int> >v ={{1,2},{2,3},{4,9}};
//   cout<<"size: "<<v.size()<<" "<<v.capacity()<<endl;
// cout<<endl;
//   for(int i=0;i<v.size();i++)
//   cout<<v[i].first<<" "<<v[i].second<<endl;

//   return 0;
// }
//------------



//------------
// int main(){
//   vector< pair<int,int> >v ;
//   int m;cin>>m;
//    cout<<"Enter "<<m<<" pair of vectors: "<<endl;
//    for(int i=0;i<m;i++){
//     int o,p;
//     cin>>o>>p;
//     v.push_back({o,p});}
  
//    cout<<"size: "<<v.size()<<" "<<v.capacity()<<endl;
//    for(int i=0;i<v.size();i++)
//     cout<<v[i].first<<" "<<v[i].second<<endl;
  
//   return 0;
// }
//------------



//------------
// //Vector of Pairs
// int main(){
//   vector< pair<int,string> >v ;
//   int m;cin>>m;
//    cout<<"Enter "<<m<<" pairs for vectors : "<<endl;  //itsNotPairOfVectors bruhh //itsVectorOfPairs iguess heeheh
//    for(int i=0;i<m;i++){
//     int k; string val;
//     cin>>k>>val;
//     v.push_back({k,val});1}
  
//    cout<<"\nsize: "<<v.size()<<" "<<v.capacity()<<endl;
//    for(int i=0;i<v.size();i++)
//     cout<<v[i].first<<" "<<v[i].second<<endl;
  
//   return 0;
// }
//------------



//------------
///pair ka gyaan -9/12/2022
// int main(){
//      pair<int,string>p;
//      p = {25,"RAM"} ;     //OR  p=make_pair(2,"ty");
//      pair<int,string> p1 = p;       
//      p1.second = "eureka";
//      cout<<p.first<<" "<<p.second<<endl;
//      cout<<p1.first<<" "<<p1.second<<endl;
// }
//------------