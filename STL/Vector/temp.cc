#include<iostream>
using namespace std ;


// template<class F,class D>
// F great(F a,D b)
// {
//     if(a>b)
//      return a;
//     else 
//      return b;
// }

// int main()
// {  
//     cout<<"Greater Value: "<<great(23,4.5)<<endl ;
//     cout<<"Greater Value: "<<great(12.3,5.5)<<endl;
// }   

// template<class T,class G> void f(T x, G z) { cout << "Template" << endl; }

// void f(int w, int z) 
// { 
//     cout << "Non-template" << endl; 
// }

// int main()
//  {
//    f( 1 ,  2 );
//    f( 567 ,  4.2 );
//    f('a', 'b');
//    f( 1 , 'b');
// }



template<class T> void f(T x, T y) { cout << "Template" << endl; }

void f(int w, int z) { cout << "Non-template" << endl; }

int main() {
   f( 1 ,  2 );
   f('a', 'b');
   f( 1 , 'b');
}

















/*
int big(int a,int b)
{
    if(a>b)
     return a;
    else 
     return b;
}

double big(double a,double b)
{
    if(a>b)
     return a;
    else 
     return b;
}
int main()
{  
    cout<<"big: "<<big(23,45)<<endl ;
    cout<<"big: "<<big(12.3,5.5)<<endl;
}
*/