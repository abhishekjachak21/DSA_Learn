#include<iostream>
#include<bits/stdc++.h>
using namespace std;


int nonRepeatedChar (string compString)
{
	
    string str = compString;
    int count = 0;
    
    for (int i = 0; i < str.size(); i++)
    {
        bool repeated = false; 
        for (int j = 0 ; j < str.size(); j++)
        {
            if (i != j && str[i] == str[j]){ 
            	repeated = true;
                break; }
        }
        
        if (repeated==false)
            count++;
    }
    return count;
}




int main()
{
    
	//input for compString
	string compString;
	getline(cin,compString);
	
    int result = nonRepeatedChar(compString);
	cout << result;
	
	
    return 0;
}