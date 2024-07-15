#include<bits/stdc++.h>
using namespace std;

void subseq(int ind, vector<int>&nums, vector<int>store, int n){
     if(ind==n){
        for(auto it:store) cout << it << " " ;
     cout<<endl;
     return;
     }
     
     store.push_back(nums[ind]);
     subseq(ind+1,nums,store,n);
     store.pop_back();

    subseq(ind+1,nums,store,n);
}

int main(){

    vector<int>nums={3,1,2};
    vector<int>store;
    int n = nums.size();

    subseq(0,nums,store,n);


    return 0;
}




































// void solve(int i, string s, string &f) {
// 	if (i == s.length()) {
// 		cout << f << " ";
// 		return;
// 	}
// 	//picking 
// 	f = f + s[i];
// 	solve(i + 1, s,  f);
// 	//poping out while backtracking
// 	f.pop_back();
// 	solve(i + 1, s,  f);
// }
// int main() {
// 	string s = "312";
// 	string f = "";
// 	cout<<"All possible subsequences are: "<<endl;
// 	solve(0, s, f);
// }