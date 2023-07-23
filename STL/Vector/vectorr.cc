#include<vector>
#include<iostream>
using namespace std;


int main(){

  int arr[]={1,4,8,9,9,10};
  int size= sizeof(arr)/sizeof(arr[0]);


  bool sorted=true;
  for(int i=0;i<size;i++)
    if(arr[i]>arr[i+1]) sorted=false;
  

  if(sorted==true) cout<<"sorted";
  else cout<<"unsorted";

  return 0;
}


//bahot mehnat se likha but its not correct way...
/* int main(){

  int arr[]={1,4,8,9,9,10};
  int size= sizeof(arr)/sizeof(arr[0]);

  int countA=0,countD=0;

  for(int i=0; i<size-1 ;i++){    //this size-1 wala zol pe dhyaan dena
    if(arr[i]<=arr[i+1]) countA++;
    if(arr[i]>=arr[i+1]) countD++;}
  

  if(countA==size-1||countD==size-1) cout<<"sorted";
  else cout<<"unsorted";

  cout<<endl<<countA<<" "<<countD<<" "<<size<<endl;

  return 0;
} */








/* int main(){

   vector<int>v={1,3,5,7,8,9,1,3};
   
   int element = 1;
   int lastOccPos =-1;

   for(int i=v.size()-1;i>=0;i--){
  //  for(int i=0;i<v.size();i++){
    if(element==v[i]){
      lastOccPos = i;
       break;  }   
   }

   cout<<"Last Occ of "<<element<<" is at "<<lastOccPos<<"th index\n";

    return 0;
} */









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










/* 
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

} */
