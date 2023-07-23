#include<iostream>
using namespace std;

int main(){
    
    int n;
    cout<<"Enter no ";cin>>n;
    
    int flag=1;        //jo yaha hai
    // if(n%1==0 && n%n==0) cout<<"Prime";
    // else cout<<"Not Prime";

    for(int i=2;i<n;i++){
        if(n%i==0) {flag=0;  //agar flag badla..zero hua toh hi use prime ka darja do
        break;}              //if-else ko bracket nhi lagaya toh ans wrong aara tha
    }
    if(flag==1) cout<<"Prime";   //vahi yaha pe consider kar
    else cout<<"Not Prime";
   

    return 0;
}


//#include<iostream>
// using namespace std;

// int main(){
    
//     int n;
//     cout<<"Enter no: ";cin>>n;
    
//     int flag = 1;

//     for(int i=2; i<n; i++){
//         if(n%i==0) {
//             flag = 0;
//             break;
//         }
//     }
    
//     if(flag==1) cout<<n<<" is a prime number."<<endl;
//     else  cout<<n<<" is not a prime number."<<endl;
    

//     return 0;
// }
