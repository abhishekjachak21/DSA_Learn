#include<iostream>
using namespace std ;

int main()
{
    int n,dig,s,sum=0;
    cout<<"Enter digit: "<<endl ;
    cin >> n;

   while(n!=0){
   
        n=n/10;
        sum++;
    
    
   }
//    cout<< " sum : "<< dig <<endl ;
   cout<< " sum : "<< sum <<endl ;
    return 0;
}

// #include <iostream>
// using namespace std;

// int count_digit(int number) {
//    int count = 0;
//    while(number != 0) {
//       number = number / 10;
//       count++;
//    }
//    return count;
// }
// int main() {
//    cout << "Number of digits in 1245: " << count_digit(126745)<< endl;
// }