#include<vector>
#include<iostream>
using namespace std;

int main()
{  

//just for info
///---------
//    int arr[]={2,9,7,1,5},en,od;
//    int arrsize=sizeof(arr)/sizeof(arr[0]);

//     for(int i = 0 ;i<arrsize;i++)
//     {
//         if(arr[i]%2==0)
//         {en++;}
//         else
//         {od++;}
//     }

//     cout<<"arrsize:"<<arrsize<<endl ;
//     cout<<"en:"<<en<<endl ;
//     cout<<"od:"<<od<<endl ;  
///----------
    


//sm=ensm-odsm
///---------
   int arr[]={2,9,7,1,5},ensm=0,odsm=0,en=0,od=0;
   int arrsize=sizeof(arr)/sizeof(arr[0]);

    for(int i = 0 ;i<arrsize;i++)
    {
        if(i%2==0)
        {ensm=ensm+arr[i];} //ensm+=arr[i];alsoucan writebro
     
        else
        {odsm=odsm+arr[i];}
      
    }

    cout<<endl <<"arrsize:"<<arrsize<<endl ;
    cout<<"ensm:"<<ensm<<endl ;
    cout<<"odsm:"<<odsm<<endl ;  
    cout<<"diff:"<<ensm-odsm<<endl ;  
    

///----------


    return 0;
}





/*
int main(){

//arry sorted or not
//----
//     int arr[]={2,9,7,1,5},ff;
//    int arrsize=sizeof(arr)/sizeof(arr[0]);

//     for(int i = 0 ;i<5;i++)
//     {
//         if(arr[i+1]>arr[i] || arr[i]>arr[i-1])
//         {ff++;}
//     }

//     if(ff==arrsize)
//     {cout<<"array sorted"<<endl;}
//     else
//     {cout<<"array not sorted"<<endl;}
//     return 0;
//-------    


//anotther take on arry sorted or not
//----
    int arr[]={1,3,45,67,98,123};
    int arrsize=sizeof(arr)/sizeof(arr[0]);
    bool sortflag = true;

    for(int i = 1 ;i<arrsize;i++)
    {
        if(arr[i]<=arr[i-1])
        {sortflag = false;}
    }
    cout<<arrsize<<endl;
    cout<<sortflag<<endl ;

   //justforexperince..hehe
    // if(sortflag=false)
    // {cout<<"array sorted"<<endl;}
    // else
    // {cout<<"array not sorted"<<endl;}
    // return 0;
    ///didn't worked this idea..shit..willtrylaterbruh
//-------    
}





int main(){
   vector<int>aj(7);

   for(int i=0;i<aj.size();i++)
    cin>>aj[i];
    cout<<endl; 

int x,occ=0;
cout<<"enteer x: ";cin>>x;
// for(int i=0;i<aj.size();i++){  //aage se
//    if(aj[i]==x)
//      {occ=i;}
// }
// for(int i=aj.size()-1;i>=0;i--){   //ending se
//    if(aj[i]==x)
//     {occ=i;}
//     //  break;      //f'ed up...break use karna hai ya nhi bhai
// }


// /// //no.of occurneces 
// for(int i=0;i<aj.size();i++){   
//    if(aj[i]==x)
//     {occ++;}
// }


/// //no.of greater elemenst
// for(int i=0;i<aj.size();i++){   
//    if(aj[i]>x)
//     {occ++;}
// }
//     cout<<"No. of greater elements : "<<occ ;
//    cout<<endl ;


//     for(int ele:aj)   //for each loop
//      cout<<ele<<"  ";
   return 0;
}
*/