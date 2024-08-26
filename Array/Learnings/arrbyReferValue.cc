#include <iostream>
using namespace std;

///==============================================================
// void modifyArray2(int arr[], int size) {
//     // Modifying the array
//     for (int i = 0; i < size; i++) {
//         arr[i] += 10;  // Modifying each element
//     }
// }

// int main() {
//     int myArray[5] = {1, 2, 3, 4, 5};

//     // Calling the function
//     modifyArray2(myArray, 5);

//     // Printing modified array
//     cout << "Modified array: ";
//     for (int i = 0; i < 5; i++) {
//         cout << myArray[i] << " ";
//     }

//     return 0;
// }
///==============================================================




///==============================================================
void modifyArray(int (&arr)[5]) {
    // Modifying the array
    for (int i = 0; i < 5; i++) {
        arr[i] += 10;  // Modifying each element
    }
}

int main() {
    int myArray[5] = {1, 2, 3, 4, 5};

    // Calling the function
    modifyArray(myArray);

    // Printing modified array
    cout << "Modified array: ";
    for (int i = 0; i < 5; i++) {
        cout << myArray[i] << " ";
    }

    return 0;
}
///==============================================================