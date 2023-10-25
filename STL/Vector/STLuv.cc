#include<bits/stdc++.h>
using namespace std ;



///ArrayOfVectors(iith part  of 2nd video from LUVSTL plylst)
///----------------------
// //partA using fun
// void printVec(vector<int> &v){
//     cout<<"\nsize: "<<v.size()<<endl;
//         for(int i=0;i< v.size();++i){
//         cout << v[i] << " ";
//         }
//         cout<<endl;
// }
///try this all withoutusing function ..solve that error
// int main()
// { 
//    int N;
//    cout<<"Enter sizeof Arr: ";cin>>N;
//    vector<int> v[N];
   
//    for(int i=0;i<N;i++)
//    {
//       int n;
//       cout<<"Enter size of vec: ";cin>>n;
//       for(int j=0;j<n;++j)
//       {
//         int x;
//         cin>>x;
//         v[i].push_back(x);
//       }
//    }
//       for(int i=0;i<N;++i){
//         printVec(v[i]);
//       }

// }

///partB without fun(getting error)
// int main()
// { 
//    int N;
//    cin>>N;
//    vector<int> v[N];
   
//    for(int i=0;i<N;i++)
//    {
//       int n;
//       cin>>n;
//       for(int j=0;j<n;j++)
//       {
//         int x;
//         cin>>x;
//         v[i].push_back(x);
//       }
//    }
//       for(int i=0;i<N;i++)
//       {
//         cout<<"size: "<<v.size()<<" "<<v.capacity()<<endl;
//         for(int i=0;i< v.size();++i)
//         {
//         cout <<"vec: " << v[i] << " ";
//         }
//       }

//     return  0;
//     }

///--------------------







//------------
// ///vectors of String ///iterators
// int main(){
   
// //    vector<string>vec ;

// //      int n;
// //     cout<<"\nEnter n: ";cin>>n;
    
// //     string b;
// //      cout<<"\nEnter element: ";
// //      for(int i=0;i<n;i++)
// //      cin>>b;vec.push_back(b);
    

// //      cout<<"\nSize: "<<vec.size()<<" "<<vec.capacity()<<endl;
// //      cout<<"YourVector: ";
// //     for(int i=0;i<vec.size();i++){
// //     cout<<vec[i]<<" ";}

    
//     vector<int>u={2,9,7,5,1};

//     for(int i=0;i<u.size();i++)
//     cout<<u[i]<<" ";

//     vector<int> :: iterator uf = u.begin();
// }
//------------


//------------
// ///vectors
void printVec(vector<int> v){
     cout<<"\nSize & Cap: "<<v.size()<<" "<<v.capacity()<<endl;
     cout<<"YourVector: ";
for(int i=0;i<v.size();i++){
     cout<<v[i]<<" ";}}

int main(){

    vector<int>v;
    int n;
    cout<<"\nEnter n: ";cin>>n;

    for(int i=0;i<n;i++){
    int b;
    cout<<"\nEnter element: ";cin>>b;
    v.push_back(b);
    }
    printVec(v);
    v.pop_back();  //del from end
    printVec(v);

     vector<int> &w=v;   ///copyinto v into w
     w.push_back(34);
     printVec(w);
  return 0;
}
//------------


