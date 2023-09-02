#include<iostream>
using namespace std;

int main()
{
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    int small=arr[0];
    for(int i=0;i<n;i++)
    {
        if(arr[i]<small)
        {
            small =arr[i];
        }
    }
    int count =0;
    int second_small=INT_FAST8_MAX;

    for(int i=0;i<n;i++)
    {

        
        if(arr[i]==small){ 
            count++;
            continue; 

}
        else if(arr[i]<second_small){
           second_small=arr[i];
        }
    
        
    }
    if(count==n)
    {
        cout << "No second small present"<<endl;
    }else{
    cout <<"Second small"<<"  "<<second_small<<endl;
    }
}