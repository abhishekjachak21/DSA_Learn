#include<bits/stdc++.h>
using namespace std;


int fmax(int arr[],int idx,int n){
    if(idx==n-1) return arr[idx];  //base case

    return max(arr[idx],fmax(arr,idx+1,n));
}
//recursion looking easy to me,but will see,it might bcz of initial 
//easyness of it...might be !! (26June 2023)

void f(int arr[], int idx, int n){
    if(idx==n) return;

    cout<<arr[idx]<<" ";

    f(arr,idx+1,n);  //why idx++ is not correct ...i used but printed 2 many
}

int main(){
    int n=5;
    int arr[] = {2,7,9,5,1}; 
     
    cout<<"print Array: ";
    f(arr,0,n);
    cout<<endl;

    cout<<"max element: "<<fmax(arr,0,n)<<endl;
}