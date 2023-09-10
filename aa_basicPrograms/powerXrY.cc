#include<iostream>
using namespace std;

int main(){

    int x,y;
    cin>>x>>y;
    
    int power=1;
    for(int i=1;i<=y;i++){
        power=power*x;;
    }
    cout<<power<<" "<<endl;

    
}