#include <iostream>
#include <bits/stdc++.h>
using namespace std;


bool compareNumbers( string num1,  string num2) {
        return num1 + num2 > num2 + num1;
    }
int main() {
    
    vector<int> nums ={2, 10, 5, 9, 45};

    // Convert numbers to strings
    vector<string> numStrings;
    for (int i : nums) {
        numStrings.push_back(to_string(i));
    }
   //  bool compareNumbers( string num1,  string num2);
    // Sort the numbers using custom comparison function
    
    sort(numStrings.begin(), numStrings.end(), compareNumbers);

    for (string i : numStrings) 
            cout<< i <<" ";
        

    return 0;
}



  
/*////------------------------------------------------------------------------
// bool compareNumbers( string num1,  string num2) {
//         return num1 + num2 > num2 + num1;
//     }


class Solution {
public:
   
   static bool compareNumbers( string num1,  string num2) {
        return num1 + num2 > num2 + num1;
    }


    string largestNumber(vector<int>& nums) {
        // Convert numbers to strings
        vector<string> numStrings;
        for (int num : nums) {
            numStrings.push_back(to_string(num));
        }

        // Sort the numbers using custom comparison function
        sort(numStrings.begin(), numStrings.end(), compareNumbers);

        // Join the sorted numbers into a single string
        string result;
        for ( string& numString : numStrings) {
            result += numString;
        }

        // Handle case with leading zeros
        if (result[0] == '0') {
            return "0";
        }

        return result;
    }
};

int main() {
    Solution solution;
    
    vector<int> nums1 = {10, 2};
    cout << solution.largestNumber(nums1) << endl;  // Output: "210"

    vector<int> nums2 = {3, 30, 34, 5, 9};
    cout << solution.largestNumber(nums2) << endl;  // Output: "9534330"

    return 0;
}



// If you don't want to use the static keyword, you can define the 
// compareNumbers function as a non-member function outside 
// the Solution class.


*////---------------------------------------------------------------
