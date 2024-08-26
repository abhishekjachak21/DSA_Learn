#include<iostream>
using namespace std;


///===========================================================
//chk if array sorted or not
bool isArrSorted(int arr[], int n, int i){
    if(i==n-1) return true;

    if(arr[i]>arr[i+1]) return false;

    return isArrSorted(arr,n,i+1);
}


int main(){

    int arr[4] = {1,3,4,5};
    int arr2[5] = {1,4,2,3,5};

    cout<<isArrSorted(arr2, 5, 0);
    // isArrSorted(arr,5,0);

    return 0;
}
///===========================================================





///===========================================================
//void istemaal se print values
// void print(int n){
//     if(n==0) return;
    
//     cout<<n<<" ";
//     print(n-1);
// }


// int main(){
     
//     int n; cin >> n;

//     cout<<"Print values from "<<n<<" to 1 => ";
//     print(n);

//     return 0;
// }
///===========================================================








///===========================================================
//int istemaal se

// int print(int n){
//     if(n==0) return 0;
    
//     cout<<n<<" ";
//     return print(n-1);
// }


// int main(){
     
//     int n; cin >> n;

//     cout<<"Print values from "<<n<<" to 1 => ";
//     print(n);

//     return 0;
// }
///===========================================================