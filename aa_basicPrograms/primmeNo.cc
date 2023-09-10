#include<iostream>
using namespace std;

//upto n elements
int main(){ 

  int t;cin>>t;
//   bool flag=true;  //think,memorise

  for(int j=2;j<=t;j++){
    bool flag=1;

    for(int i=2;i<j;i++){  //i<=j    => nothing gets printed...how sensitive brio
    if(j%i == 0){
        flag=false;
        break;
        }
    }
    if(flag)
     cout<<j<<" ";

  } 

   return 0;
}





//simple code by me
/* int main(){
    int n;cin>>n;

    bool flag=true;
    for(int i=2;i<n;i++)
        if(n%i == 0) flag=false;
    
    if(flag) cout<<"yes prime\n";
    else cout<<"no prime\n";
} */












/* #include <iostream>
using namespace std;

bool isPrime(int n) {
    if (n <= 1) {
        return false;
    }
    for (int i = 2; i * i <= n; i++) {
        if (n % i == 0) {
            return false;
        }
    }
    return true;
}

int main() {
    int num;
    cout << "Enter a number: ";
    cin >> num;
    if (isPrime(num)) {
        cout << "Prime";
    } else {
        cout << "Not Prime";
    }
    return 0;
}
 */