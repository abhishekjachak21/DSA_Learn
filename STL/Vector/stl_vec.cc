#include<iostream>
#include<vector>
using namespace std;


///6/12/2022

int main(){
   vector<int>vec;

  for(int i=1;i<=8;i++){
   vec.push_back(i);
   cout<<"Vec size:" <<vec.size()<<endl;
   cout<<"Vec Capacity:" <<vec.capacity()<<endl;
  }
  cout<<endl ;

   for(int i=0;i<8;i++)
   cout<<2*vec[i]<<" ";
   cout<<endl<<endl ;

   cout<<"Vec size:" <<vec.size()<<endl;
   cout<<"Vec Capacity:" <<vec.capacity()<<endl<<endl;

   vector<int>::iterator iter = vec.begin();
   vec.insert(iter,2,546);  //it fills up ele till index 2,no great

   vec.insert(vec.begin()+4,21);   //this is more useful

   for(int i=0;i<8;i++)
   cout<<vec[i]<<" ";
   cout<<endl<<endl ;

   for(int i=0;i<8;i++)
   cout<<vec.at(i)<<" ";
   cout<<endl<<endl ;

cout<<vec.at(1)<<" "<<vec[2]<<endl;
  return 0;

}



// //  9/11/2022-

// //just read write of ip
// void display(vector<int> &v)
// {
//      for(int i=0;i<v.size();i++)
//      {
//         cout << v[i] << " ";
//      }
//     //  cout << endl ;
// }
// int main()
// {
//     vector<int> vec1;
//       int element;
//       for(int i=0;i<3;i++){
//         cout<<"Enter element: ";
//         cin>>element;
//         vec1.push_back(element);
//       }
//     display(vec1);

///without function
// int main()
// {
//     vector<int> vec1;
//       int element;
//       for(int i=0;i<3;i++){
//         cout<<"Enter element: ";
//         cin>>element;
//         vec1.push_back(element);
//       }
//     //display(vec1);
//     vec1.pop_back(element[1]);   //deletes last element

//     for(int i=0;i<vec1.size();i++)
//     { cout << vec1[i] << " ";  }

//     return 0;
// }
