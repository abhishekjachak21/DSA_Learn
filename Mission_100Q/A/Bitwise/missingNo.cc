#include<bits/stdc++.h>
using namespace std;


int missing (vector<int>&v1){
    int n = v1.size();
    int ans = 0;

    for (int i = 0; i <= n; i++){
        ans = ans ^ i;
    }

    for (int i = 0; i < n; i++)
    {
        ans = ans ^ v1[i];
    }

    return ans;

}




int main(){
    vector<int>v1 = {0,1,2,3,5};
    // int missingVal hota toh void chalta 
    cout<<"Missing Value: "<<missing(v1)<<endl;
     return 0;
}