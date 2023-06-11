#include<iostream>
using namespace std ;


///'this' pointer boi
// class A{
//   int a;
//    public:  
//    void setData(int a){
//     // this-> a=a;
//        a = a;}
//    void getData(){
//     cout<<"Value of A: "<<a<<endl ;}
// };
// int main(){
//      A a;
//      a.setdata(4);
//      a.getdata();

//     return 0;
// }
////output is 4 


// try belowed

// class A{
//   int a;
//    public:  
//    void setData(int a){
//        a = a;}
//    void getData(){
//     cout<<"Value of A: "<<a<<endl ;}
// };
// int main(){
//      A a;
//      a.setData(4);
//      a.getData();

//     return 0;
// }
////output is 0
//----------------------------------------




//----------------------------------------
// //pointer for char
// int main()
// {
//     int edu = 869 ;
//     int* ptr = &edu ;
//     char erik = 'T';
//     char *prt = &erik ;

//     cout << "Address of edu: " << ptr <<" & "<< &edu << endl ;
//     cout << "Address of edu: " << prt <<" & "<< &erik << endl ;
//     cout << "Value of edu " << *ptr << endl ;
//     cout << "Value of edu " << *prt << endl ;
//     edu++;
//     cout << "Address of edu: " << ptr <<" & "<< &edu << endl ;
 
//     return 0;
// }
//----------------------------------------




//----------------------------------------
// ////HEY,ppointers & Array using for loop
// int main()
// {
//     int arr[]={2,9,7,1};
//     int* p = arr;
//     for (int i=0;i<4;i++)hh< *(p+i) << endl ;

//     return 0;
// }
//----------------------------------------




//----------------------------------------
//HEY,Pointer and Arrays
// int main()
// {
//     int arr[]={2,9,7,1};
//     int* p = arr;
//     cout << "p="<< *(p) << endl ;
//     cout << "p+1="<< *(p+1) << endl ;
//     cout << "p+2="<< *(p+2) << endl ;
//     cout << "p+3="<< *(p+3) << endl ;
   
//      ////below code isn't working...
//      cout << "p="<< &(p) << endl ;
//     // cout << "p+1="<< &(p+1) << endl ;
//     // cout << "p+2="<< &(p+2) << endl ;
//     // cout << "p+3="<< &(p+3) << endl ;

//     return 0;
// }
//----------------------------------------




//----------------------------------------
//HEY,simple pointer concept
int main()
{
    int a= 334;
    int * aptr = &a ;
    
    cout << &a << endl ;
   // cout << int*a << endl ;
    cout << *aptr << endl ;
    aptr ++ ;
    cout << aptr << endl ;
    aptr ++ ;
    cout << aptr << endl ;
    cout << *aptr << endl ;
    cout << endl ;

    // int **c = &aptr ;
    // cout << &aptr << endl ;
    // cout << c << endl ;
    // cout << *c << endl ;
    // cout << **c << endl ;

    return  0;
}
//----------------------------------------