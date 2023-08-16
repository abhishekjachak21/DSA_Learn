#include <iostream>
#include <string>
// #include <cctype> // Include the cctype header for toupper function
using namespace std;

int main() {
    string name;
    cout << "Input string: ";
    cin >> name;

    // Convert the first character to uppercase
   
        name[0] = toupper(name[0]);
    
    // Convert the last character to uppercase

        name[name.size() - 1] = toupper(name[name.size() - 1]);
    

    cout << name;

    return 0;
}
git config --global user.email "abhishekjachak22@gmail.com"                            
git config --global user.name "Abhishek Jachak"