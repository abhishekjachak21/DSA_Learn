
#include <bits/stdc++.h>
using namespace std;

bool updateMapBasedOnConditions(unordered_map<int, int>& mp, const vector<int>& v2) {
    for(int i = 0; i < v2.size(); i++) {
        if(v2[i] == 10) {
            if(mp[5] > 0) {
                mp[5]--;
            } else {
                return false; // 5 is not available
            }
        } else if(v2[i] == 20) {
            if(mp[5] > 0 && mp[10] > 0) {
                mp[5]--;
                mp[10]--;
            } else {
                return false; // 5 or 10 is not available
            }
        }
        // If v2[i] == 5, do nothing (subtracting 0)
    }
    return true; // All conditions met
}

int main() {
    unordered_map<int, int> mp;
    vector<int> v = {5, 5, 5, 10, 20};
    vector<int> v2 = {5, 5, 5, 10, 20};

    // Initialize the unordered map with counts from vector v
    for(int i = 0; i < v.size(); i++) {
        mp[v[i]]++;
    }

    // Print the initial map values
    cout << "Initial map values:" << endl;
    for(auto i : mp) {
        cout << i.first << " " << i.second << endl;
    }

    // Update the map based on the conditions from vector v2
    bool result = updateMapBasedOnConditions(mp, v2);

    // Print the result
    if(result) {
        cout << "Updated map values:" << endl;
        for(auto i : mp) {
            cout << i.first << " " << i.second << endl;
        }
    } else {
        cout << "False: Required values not available." << endl;
    }

    return 0;
}








// int main(){
//     unordered_map<int,int>mp;
//     vector<int>v={5,5,5,10,20};
//     vector<int>v2={5,5,5,10,20};

//     for(int i;i<v.size();i++){
//         mp[v[i]]++;
//     }
//     for(auto i:mp) cout<<i.first<<" "<<i.second<<endl;

//     for(int i=0;i<v2.size();i++){
//         if(v2[i]==10) mp = mp-5;
//         else if(v2[i]==5) mp = mp-0;
//         else if(v2[i]==20) mp = mp-5 && mp=mp-10;
//     }

// }