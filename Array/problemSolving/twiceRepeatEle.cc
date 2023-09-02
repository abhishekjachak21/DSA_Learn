#include <iostream>
#include <map>
#include <vector>
using namespace std;
//2 Sep 2023

int main(){
    int n;cin>>n;
    int a[n];

    for(int i=0;i<n;i++){
        cin>>a[i];
    }

    map<int,int>mp;
    vector<int>v;

    for(int i=0;i<n;i++){

        int ele=a[i];
        v.push_back(ele);

        if(mp.find(ele)==mp.end()) mp[ele]=1;
        else mp[ele]++;
    }

    cout<<"Elements occuring two times: ";
    for(auto i:v){
        if(mp[i]==2) cout<<i<<" ";
        mp[i]--;
    }

    cout<<endl;    
    
}



/* int main() {

    int n;cin>>n;
    int arr[n];

    for(int i=0;i<n;i++){
        cin>>arr[i];
    }

    map<int, int> elementFrequency;
    vector<int> originalOrder;

    for (int i = 0; i < n; i++) {
        int element = arr[i];

        // Add the element to the vector to preserve original order
        originalOrder.push_back(element);

        // If the element is not in the map, add it with frequency 1
        if (elementFrequency.find(element) == elementFrequency.end()) {
            elementFrequency[element] = 1;
        } else {
            // If the element is already in the map, increment its frequency
            elementFrequency[element]++;
        }
    }

    cout << "Elements that occur twice in original order: ";
    for (int element : originalOrder) {
        if (elementFrequency[element] == 2) {
            cout << element << " ";
            elementFrequency[element]--; // To avoid counting the element more than twice
        }
    }

    return 0;
} */




/* int main(){
    int n;cin>>n;
    int a[n];

    for(int i=0;i<n;i++){
        cin>>a[i];
    }

    map<int,int>mp;

    for(int i=0;i<n;i++){

        int ele=a[i];

        if(mp.find(ele)==mp.end()) mp[ele]=1;
        else mp[ele]++;
    }

    cout<<"Elements occuring two times: ";
    for(auto i:mp)
        if(i.second==2) cout<<i.first<<" ";

    cout<<endl;    
    
} */



/* int main() {
    int arr[] = {5, 2, 8, 1, 5, 9, 2, 3};
    int n = sizeof(arr) / sizeof(arr[0]);

    map<int, int> eleFreq;

    for (int i = 0; i < n; i++) {
        int element = arr[i];

        // If the element is not in the map, add it with frequency 1
        if (eleFreq.find(element) == eleFreq.end()) {
            eleFreq[element] = 1;
        } else {
            // If the element is already in the map, increment its frequency
            eleFreq[element]++;
        }
    }

    cout << "Elements that occur twice: ";
    for (const auto& entry : eleFreq) {
        if (entry.second == 2) {
            cout << entry.first << " ";
        }
    }

    return 0;
} */
