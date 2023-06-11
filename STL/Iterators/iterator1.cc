#include<bits/stdc++.h>
using namespace std;

//iterator ka gyaan 29/01/2023 

////-----------------------------------------
//loop using auto keyWord
int main(){
   
    // vector<int>v={2,9,7,5,1,8};
    // for(auto it=v.begin();it!=v.end();it++)
    //  cout<<*it<<" ";
    // cout<<endl;

    vector<pair<int,int>>vp={{23,5},{35,8},{56,4}};
    for(auto value : vp) cout<<value.first<<endl;
    // pair<int,int>   ==  auto /..waah kya taaj
   return 0;
}
////----------------------------------------




////-----------------------------------------
//for each looop
// int main(){
//     vector<int>v={2,9,7,5,1,8};
//     vector<int>::iterator it=v.end();

//     for(int &i:v) {i++;cout<<i<<" ";}
//      cout<<endl;
//     for(int i:v) cout<<i<<" ";
//     cout<<endl;

//    return 0;
// }
////----------------------------------------


////-----------------------------------------
// int main(){
//     vector<int>v={2,9,7,5,1,8};
//     for(int i=0;i<v.size();i++)
//        cout<<v[i]<<" ";
//     cout<<endl;

//     vector<int>::iterator it=v.end();
//     cout<<(*(it-1))<<endl;

//     for(it=v.begin();it!=v.end();it++)
//         cout<<*it<<" ";
//     cout<<endl;

//    return 0;
// }
////----------------------------------------




// ////-------------------------------------------
// int main(){
//     // vector<int>v={2,3,4};
//     vector<pair<int,int>> vop={{1,97},{2,94},{3,90}};
//     vector<pair<int,int>>::iterator it;
//     // for(it=vop.begin();it<vop.end();it++)
//     //     cout<<(*it).first<<" "<< (*it).second<<endl;
//     for(it=vop.begin();it<vop.end();it++)    
//         cout<< (it->first)<<" " << (it->second)<<endl;   //MyFavOperator "->"
// }
/////-------------------------------------------