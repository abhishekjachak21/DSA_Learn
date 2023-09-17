#include<bits/stdc++.h>
using namespace std;

int main ()
{
    set<int> mySet{2,7,4};
    mySet.insert(41);
    
    set<int>::iterator it;

    for (it=mySet.begin(); it!=mySet.end(); it++)
      cout << (*it)-1 <<" ";

cout << endl;
}