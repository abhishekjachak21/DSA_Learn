#include<bits/stdc++.h>
using namespace std;

int main ()
{
    set<int> my_set{2,7,4};

    set<int>::iterator it;

    for (it=my_set.begin(); it!=my_set.end(); ++it)
    cout << *it-1 <<" ";
cout << '\n';
}