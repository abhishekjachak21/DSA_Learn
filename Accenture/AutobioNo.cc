#include<bits/stdc++.h>
using namespace std;

int FinndAutoCount (string n){
    
  int sum = 0;
  set < char > st;
  for (int i = 0; i < n.size (); i++)
    {
      sum += (n[i] - '0');
      st.insert (n[i]);
    }
  if (sum != n.size ())
    return 0;
  return st.size ();
}

int main ()
{
  string n;
  cin >> n;
  cout << FinndAutoCount (n) <<endl ;
  return 0;
}