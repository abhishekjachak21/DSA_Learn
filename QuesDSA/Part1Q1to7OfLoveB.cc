#include<iostream>
#include<bits/stdc++.h>
using namespace std;


// ///===========================================================
//Question 7 :Cyclically Rotate Array by One
int main(){

   int a[]={1,2,3,4,5};
   int n=5,x;

   x=a[n-1];
   for(int i=n-1;i>=0;i--) {a[i+1]=a[i];}
   a[0]=x;

   for(int i=0;i<n;i++) cout<<a[i]<<" ";
}
// ///===========================================================



/*
// ///===========================================================
///Question 5: Move negative ele at begining
int main(){
  int n;cin>>n;

  int ar[n];

  for(int i=0;i<n;i++) cin>>ar[i];
  int s=0;
  for(int i=0;i<n;i++){
    if(ar[i]<0 ) {swap(ar[i],ar[s]); s++;}
  
  }
  for(int i=0;i<n;i++) cout<<ar[i]<<" ";
 return 0;
}
///-------------------------------------------------------------
 int main(){ 
  int n;cin>>n;
  int ar[n];
  int s=0,k=n-1;
 for(int i=0;i<n;i++) cin>>ar[i];
  while(s<=k){
    
    if(ar[s]<0 )   {s++;}
    else if(ar[k]>=0)   {k--;}
    // if(ar[k]>0)  {k--;}
    // if(ar[s]<0 )  {s++;}
    else {swap(ar[s],ar[k]);}
  
  }
//   sort(ar,ar+n);
  for(int i=0;i<n;i++) cout<<ar[i]<<" ";
  return 0;
}
// ///===========================================================



// ///===========================================================
// //Question 4: Sort 0's, 1's, 2's
   public:
    void sort012(int arr[], int n)
    {
        int low=0,mid=0,high=n-1;
	while(mid<=high){
		if(arr[mid]==0){
			swap(arr[mid],arr[low]);
			low++;
			mid++;
		}else if(arr[mid]==1){
			mid++;
		}else{
			swap(arr[mid],arr[high]);
			high--;
		}
	}
    }
// ///-------------------------------------------------------------
class Solution
{
    public:
    void sort012(int a[], int n)
    {
        int s=0,d=n/2,k=n-1;
        
        while(s<d && d<k){
            
            if(k==2) k--;
            if(k==1) swap(a[d],a[k]);
            if(k==0) swap(a[s],a[k]);   
            
            if(s==2) swap(a[s],a[k]); 
            if(s==1) swap(a[d],a[s]);
            if(s==0) s++;  
            
            // if(d==2) k--;
            // if(d==1) swap(a[d],a[k]);
            // if(d==0) swap(a[s],a[k]);   
            
        }
    }
}    
///-------------------------------------------------------------
class Solution
{
    public:
    void sort012(int a[], int n)
    {
        int s=0,d=0,k=0;
        
        for(int i=0;i<n;i++){
            if(a[i]==0) s++;
            else if(a[i]==1) d++;
            else k++;
        }
    //    int m=0;
        for(int i=0;i<s;i++) a[i]=0;
        for(int i=s;i<s+d;i++) a[i]=1;
        for(int i=s+d;i<s+d+k;i++) a[i]=2;
    }
    
};
///-------------------------------------------------------------
class Solution
{
    public:
    void sort012(int a[], int n)
    {
        int s=0,d=0,k=0;
        
        for(int i=0;i<n;i++){
            if(a[i]==0) s++;
            else if(a[i]==1) d++;
            else k++;
        }
       int m=0;
        for(int i=0;i<s;i++) a[m++]=0; //m=2
        for(int i=0;i<d;i++) a[m++]=1;  //m=4
        for(int i=0;i<k;i++) a[m++]=2;  //m=6
    }
    
};
///===========================================================





///===========================================================
//Question 2: Minimum and Maximum in Array
int main()
{
    sort(a,a+n);
    int min=a[0],max=a[n-1];
    etc

    return 0;
}
///-------------------------------------------------------------
//on GFG
class Solution
{
   public:
    int findSum(int A[], int N)
    {
        int min=INT_MAX,max=INT_MIN;
        
        for(int i=0;i<N;i++){
            if(max<A[i])
            { max=A[i];}
        }
        for(int i=0;i<N;i++){
            if(min>A[i])
            { min=A[i];}
        }
        
       return (min+max);
    }

};
///===========================================================





///===========================================================
//Question 1 : Reverse the Array
int main()
{
    int n;cin>>n;
    int a[n];

    for(int i=0;i<n;i++)
    cin>>a[i];

    int s=0;
    int k=n-1;
    while(s<k){

        swap(a[s],a[k]);
        s++;
        k--;
     }

    for(int i=0;i<n;i++)
    cout<<a[i]<<" ";
    return 0;
}
///-------------------------------------------------------------
int main()
{
    int n;cin>>n;
    int a[n];

    for(int i=0;i<n;i++)
    cin>>a[i];

   
    for(int i=n-1;i>=0;i--)
    cout<<a[i]<<" ";

    return 0;
}
///===========================================================
*/
