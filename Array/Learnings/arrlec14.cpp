#include<iostream>
using namespace std ;



int main()
{
  
    int n,sum=0;
    cout<<"Enter size\n";
    cin >> n;

    int arr[n];
     cout << "\nYouR Array: ";
   
   /*forsum
    for(int i=0;i<n;i++){
     cin >> arr[i];
     sum = sum + arr[i];
         }
     cout << "\nSum: "<<sum << endl ;*/
    

    int minind=arr[0];
   // int maxind=arr[1];
    for(int i=0;i<n;i++){
     cin >> arr[i];
      
      if(arr[i]<arr[0])
        minind=arr[i];
    //   else if(arr[i]>arr[1])
    //      maxind=arr[i];  

      }

         cout << "MIn: "<<minind<<endl  ;   
        //  cout << "Max: "<<maxind<<endl  ;   

    return 0;
}




/*
int main()
{
    int n;
    cout<<"Enter size\n";
    cin >> n;

    int arr[n];

    for(int i=0;i<n;i++)
     cin>>arr[i];

    ///for each loop not worked
    //will try this later
    // for(int ele:arr)
    //   cin>>ele ;  
      
       cout<<endl ;  

    cout<< "\nyour array\n";
   
    for(int i=0;i<n;i++)
       cout<<arr[i]<<" ";
   
   cout<<endl ;
    for(int i=0;i<n;i++)
       cout<<"addr of arr:"<<&(arr[i])<<endl;  

     cout<< "\nyr array is traversed\n";

    //for each loop
    for(int ele:arr)
       cout<<ele<<" " ; 
       cout<<endl ;  
    
   

    return 0;
}
*/