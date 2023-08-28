#include<bits/stdc++.h>
using namespace std;

int main ()
{
  int arr[100];
  int length, i, j, oddlen, evenlen;
  int odd[50], even[50];

  cout << "Enter the length of array : "; cin >> length;
  for (i = 0; i < length; i++){
      cout << "Enter element at " << i << " index : "; cin >> arr[i];
    }

  if (length % 2 == 0){
      oddlen = length / 2;
      evenlen = length / 2;}
  else{
      oddlen = length / 2;
      evenlen = (length / 2) + 1;}

  for (i = 0; i < length; i++){	// seperation of even and odd array
      if (i % 2 == 0)
	    even[i / 2] = arr[i];
      else
	    odd[i / 2] = arr[i];
    }

  //sorting process
  sort(even,even+evenlen);
  sort(odd,odd+oddlen);

  cout << "\nSorted even array : ";	// printing even array
  for (i = 0; i < evenlen; i++)
    cout << even[i] << " ";
  cout <<endl;

  cout << "Sorted odd array : ";	// printing odd array 
  for (i = 0; i < oddlen; i++)
      cout << odd[i] << " ";
  cout << endl;


////need to change this but later much time invested alrdy

if(length>=3)
  cout << "Sum of 2ndLarNo from both matrix: " << even[evenlen-2] + odd[oddlen-2] << endl;	// printing final result 
else if(evenlen==1)  
  cout << "Sum of 2ndLarNo from both matrix: " <<  odd[oddlen-2] << endl;	// printing final result 
 else if(oddlen==1) 
  cout << "Sum of 2ndLarNo from both matrix: " << even[evenlen-2] << endl;	// printing final result 
else 
  cout<<"there is no 2nd largest no!"<<endl;  
}