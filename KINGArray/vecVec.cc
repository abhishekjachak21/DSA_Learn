#include <iostream>
#include <vector>
#include <string>
using namespace std;


int main(){

   vector<int>v={1,3,5,7,8,9,1,3};
   
   int element = 10;
   int lastOccPos =-1;

   for(int i=v.size()-1;i>=0;i--){
    if(element==v[i]){
      lastOccPos = i;
       break;  }
        
   }

   cout<<"Last Occ of "<<element<<" is at "<<lastOccPos<<"th index\n";

    return 0;
}



/* int main(){

vector<int>v ;
v = { 2,5,9,4};

// for(int i=0;i<v.size();i++){
//   cout<< v[i] << " ";
// }
 
   for(int i:v){
    cout << i << " ";
   }cout<<endl;

   v.insert(v.begin()+2,6);

   v.insert(v.end()-1,5);

   v.push_back(3);
   v.pop_back();

//    v.push_front(3); there in deque..
//    v.pop_front();

    for(int i:v){
    cout << i << " ";
   }
//    v.clear();
//    for(int i:v){
//     cout << i << " ";
//    }

} */




/* int main(){

//    vector<int>v;

//    for(int i=0;i<5;i++){
//     int ele; cin>>ele;
//     v.push_back(ele);
//     }
   
//  for(int i:v)
//     cout << i << " ";



  int arr[5];
  
  for(int&i:arr)   //"&" is used here to refer same memory location as arr
    cin>>i;
   
  for(int i:arr)
    cout << i << " ";


    return 0;
} */









//----------------------------------------------------------------

/* int main() {

    vector<vector<string>> v;

    // Adding elements to the vector
    vector<string> group1 = {"apple", "pale", "leap"};
    vector<string> group2 = {"cat", "act", "tac"};
    vector<string> group3 = {"dog", "god"};
    
    v.push_back(group1);
    v.push_back(group2);
    v.push_back(group3);

    // Accessing elements from the vector
    //v > group > str
    for (auto group : v) {
        for (auto str : group) {
            cout << str << " ";
        }
        cout << endl;
    }

    return 0;
}
 */