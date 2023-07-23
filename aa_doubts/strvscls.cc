#include<iostream>
// #include<bits/stdc++.h>
using namespace std;

//------------------------------------------
///structure and class
// struct dob{
//     int date;
//     string month;
//     int year;
// };
// int main(){
//     dob stu1;
//     stu1.date=17;
//     stu1.month="Jan";
//     stu1.year=2023;

//     cout<< stu1.date<<
//     " "<<stu1.month<<" "
//     <<stu1.year<< endl;
// }
//------------------------------------------


//------------------------------------------
// ////pointer increament in heap memory
// int main()
// {
// int *ptr = new int;
//   *ptr=21;
//   cout<<*ptr<<endl;
//   (*ptr)++;          //*ptr++;wrong
//   cout<<*ptr<<endl;
//   delete p;           //only pointing memory gets deleted, pointer stays
// }
//------------------------------------------

// //------------------------------------------
// //reference variable
// void inc(int &a){
//     a++;
// }
// int main(){
//     int a=5;
//     inc(a);
//     cout<<a<<endl;
// }
// //------------------------------------------

////------------------------------------------
/////function pointers
int main(){
    int*p = new int(8089);
    float* c=new float(3.56);
    cout<<*(p)<<endl;
    cout<<&p<<endl; 
    cout<<p<<endl; 
    cout<<*(p)<<endl;
    cout<<*(c)<<endl;
}
// //------------------------------------------