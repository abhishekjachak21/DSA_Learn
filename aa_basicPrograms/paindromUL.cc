#include<iostream>
using namespace std;


//code using function
bool palin(int n){
   
    int original=n;
    int rev=0,num;

    while(n>0){
        num = n%10 ;
        rev = rev*10 + num;
        n /= 10;
    }

    if(rev==original) cout<<"Yes!its pailindrome\n";
    else cout<<"No!its not palindrome\n";

    return 0;  //int,bool,float ko return stat is need
}

int main(){

  int t;cin>>t;
  while(t--){
    int n;cin>>n;
    palin(n);
  }

    return 0;
}




//simple code
/* int main(){

    int n;cin>>n;
    int original=n;
    int rev=0,num;

    while(n>0){
        num = n%10 ;
        rev = rev*10 + num;
        n /= 10;
    }

    if(rev==original) cout<<"Yes!its pailindrome\n";
    else cout<<"No!its not palindrome\n";

    return 0;
} */














/* #include <iostream>
using namespace std;

bool isPalindrome(int num) {
    
    int originalNum = num;
    int reversedNum = 0;

    while (num > 0) {
        int digit = num % 10;
        reversedNum = reversedNum * 10 + digit;
        num /= 10;
    }

    return originalNum == reversedNum;
}

int main() {
    int lowerLimit, upperLimit;

    cout << "Enter lower limit: ";
    cin >> lowerLimit;

    cout << "Enter upper limit: ";
    cin >> upperLimit;

    for (int num = lowerLimit; num <= upperLimit; num++) {
        if (isPalindrome(num)) {
            cout << num << " ";
        }
    }

    return 0;
}
 */