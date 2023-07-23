#include<vector>
#include<iostream>
using namespace std ;




///-----------------------------------------------
///lec15 sortedSquaredArray
void sortSqArr(vector<int> &vec){

  vector<int>ans;
  int x=0;
  int y=vec.size()-1;

  while(x<=y){
   if(abs(vec[y])>abs(vec[x])){
    ans.push_back(vec[y]*vec[y]);
    y--;
   }
   else {
    ans.push_back(vec[x]*vec[x]);
    x++;
   }
  }

//   reverse(ans.begin(),ans.end());

  for(int i=0;i<ans.size();i++){
    cout<<ans[i]<< " ";
  }

}


int main()
{
   int n;cin>>n;
   vector<int>vec;

   for(int i=0;i<n;i++)
   {
   int ele;
   cin>>ele;
   vec.push_back(ele);
   }

   sortSqArr(vec);

   return 0;
}