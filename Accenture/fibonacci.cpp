#include <iostream>
using namespace std;

// int main() {
//     int n;
//     cout << "Enter the number of terms: ";
//     cin >> n;
    
//     int a = 0, b = 1;
//     cout << "Fibonacci Series: ";
//     for (int i = 1; i <= n; i++) {
//         cout << a << " ";
//         int next = a + b;
//         a = b;
//         b = next;
//     }
//     return 0;
// }

int main(){
    int n;
    cout<<"Enter no of terms: ";
    cin>>n;

    int a=0,b=1;
    cout<<"Fibonacci Series: ";
    // cout<<0<<" ";   
    for(int i=0; i<n; i++){
        
        cout<<a<<" ";
        int next = a+b;
        a=b;
        b=next;
        // cout<<b<<" ";
    }

    return 0;
}