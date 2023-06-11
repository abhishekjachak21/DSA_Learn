#include<vector>
#include<iostream>
using namespace std;


int main(){
   vector<int>vec;


  //  for(int i=0;i<17;i++){
  //   int r;
  //   cin>>r;
  //  vec.push_back(r);
  //  cout<<"Vec size:" <<vec.size()<<endl;
  //  cout<<"Vec Capacity:" <<vec.capacity()<<endl;
  // }

///////OR

  for(int i=0;i<17;i++){
   vec.push_back(i);
   cout<<"Vec size:" <<vec.size()<<endl;
   cout<<"Vec Capacity:" <<vec.capacity()<<endl;
  }
  cout<<endl ;

  for (auto a = vec.begin(); a!= vec.end(); ++a)
		cout << *a << " ";
        cout<<endl;

  cout<<endl ;

  for(int i=0;i<vec.size();i++)
    cout<<vec[i]<<" ";
    cout<<endl ;

  cout<< endl;

  for(int i=0;i<12;i++){ 
   vec.pop_back();
   cout<<"Vec size:" <<vec.size()<<endl;
   cout<<"Vec Capacity:" <<vec.capacity()<<endl;
  }

//   vec.insert(vec.end()-6,67);
//   vec.insert(vec.end()-7,47);
//   vec.insert(vec.end()-4,88);
  vec.insert(vec.begin()+3,35); //after 3 boxes
  
  for(int i=0;i<vec.size();i++)
    cout<<vec[i]<<" ";
    cout<<endl;

  vec.erase(vec.begin()+2); //after 2 boxes

  for(int i=0;i<vec.size();i++)
    cout<<vec[i]<<" ";
    cout<<endl ;


//    vec.push_back(3);
//     cout<<"Vec size:" <<vec.size()<<endl;
//    cout<<"Vec Capacity:" <<vec.capacity()<<endl;

//      vec.pop_back();
//     cout<<"Vec size:" <<vec.size()<<endl;
//    cout<<"Vec Capacity:" <<vec.capacity()<<endl;

  cout<<"\n84 inserted!\n";

    vec.insert(vec.begin()+1,84);
     for(int i=0;i<vec.size();i++)
    cout<<vec[i]<<" ";
    cout<<endl;
    
    cout<<"Vec size:" <<vec.size()<<endl;
   cout<<"Vec Capacity:" <<vec.capacity()<<endl;
   
   
   return 0;

}
