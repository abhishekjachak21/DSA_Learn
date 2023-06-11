#include<iostream>
using namespace std;

// int binnSear(int arr[],int n, int key)
//   {
//     int mid,s,e;
//     s=0;
//     e=n;

//     while(s<=e){
       
//        mid=(s+e)/2 ;

//        if(arr[mid]==key)
//         return (mid);

//        else if(arr[mid]>key)
//         e=mid-1;

//        else
//         s = mid+1;
//     }
//    // cout <<"Mid index= "<< midest << endl ;
//     return -1;
//     //cout <<"Mid index= "<<arr[mid];
// }
// int main()
// {
//     int n,key;
//     cout << "Enter array Size "<<endl ;
//     cin >> n;

//     int arr[n],i;
//     cout << "Enter array\n";
//     for(i=0;i<n;i++){
//         cin>>arr[i];
//     }

//     cout <<"\nEnter Key: "<<endl ;
//     cin >> key;
//     cout << "MidElement at Index:  " << binnSear(arr,n,key)<<endl ;
//     return 0;
// }
       
/*kuch toh gadbad hai daya,
bcz without creating func we cant get op of it,
when func is created the op got how ??
what is reason of this??*/



int main()
{
    int n,key,mid,s,e,mider;
    cout << "Enter array Size "<<endl ;
    cin >> n;

    int arr[n],i;
    cout << "Enter array\n";
    for(i=0;i<n;i++){
        cin>>arr[i];
    }

    cout <<"\nEnter Key: "<<endl ;
    cin >> key;

    
    s=0;
    e=n;
    mid=(s+e)/2 ; 

    while(s<=e){
    

       if(arr[mid]==key)
         cout << "mid ele" << mid ;
         exit(0);

      if(arr[mid]>key)
        e=mid-1;

       else
        s = mid+1;
     
      mid=(s+e)/2 ;
    
    }
  //  cout << "MidElement at Index:  " << mider <<endl ;

   // cout <<"Mid index= "<< midest << endl ;
    return 0;
    //cout <<"Mid index= "<<arr[mid];
}



