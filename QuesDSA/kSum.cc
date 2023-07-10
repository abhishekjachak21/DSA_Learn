#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main()
 {
	//code
	int n;
	cin>>n;
	while(n--){
	    int s,k;
	    cin>>s>>k;
	    int A[s];
	    for(int i=0;i<s;i++){
	        cin>>A[i];
	    }
	    sort(A,A+s);
	    int sum=0;
	    for(int i=0;i<k;i++){
	       sum += A[i];
	    }
	    cout<<sum;
	    
	}
	return 0;
}