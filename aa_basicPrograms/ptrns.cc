#include<iostream>
using namespace std ;













/*
      1
     2 2
    3   3
   4     4
  5       5
 6         6
7777777777777
still it is a wrong for long num*/
// int main()
// {
//     int n;
//     cin>>n;

//      for(int k=1;k<=1;k++)
//     {   
//       for(int j=1;j<=(n-k);j++)
//         cout<<" ";
//         cout<<1;
//          cout<< endl ;
//     }

//     for(int i=2;i<n;i++)
//     {
//         for(int j=1;j<=(n-i);j++)
//         cout<<" ";

//        for(int j=i;j<=i;j++)
//         cout<<j;

//         for(int j=2;j<=(2*i-2);j++)
//         cout<<" ";

//          for(int j=i;j<=i;j++)
//          {
//              cout<<j;
//          }
//          if(i==(n+1))
//          {
//           for(int j=1;j<n+1;j++)
//             cout<<n;
//          }
//         // for(int j=;j<=(2*i-1);j++)
//         // cout<<" ";
//         cout << endl ;
//     }
//      for(int k=1;k<=n;k++) {   
//       if(k==n)
//        for(int j=1;j<=2*n-1;j++)
//         cout<<k;     
//     } 
// }












// int main()
// {
//     int n;
//     cin>>n;
//     for(int i=1;i<=n;i++)
//     { if(i!=5){
//         for(int j=1;j<=(n-i);j++)
//             cout<<" ";

//         cout<<i<<endl ;

//         if(i!=1){
//             for(int k=1;k<=(2*(n-1)-1);k++)
//            { cout<< " ";}
//            cout<<i<<endl;

//         }    
        
//     }
    
//     }
//     }         .....code by PG  4/11/22



///code by Vivek 4/11/22
// int main()
// {
//     int n;
//     cin>>n;
//     for(int i=0;i<n-1;i++)
//     {
//         cout <<" ";
//     }
//     cout <<1;
//     for(int i=0;i<n-1;i++)
//     {
//         cout <<" ";
//     }
//     cout <<endl;

//     for(int i=2;i<n;i++)
//     {
//         for(int j=1;j<=(n-i);j++)
//         cout<<" ";

//       for(int j=i;j<=i;j++)
//         cout<<j;

//         for(int j=2;j<=(2*i-1);j++)
//         cout<<" ";

//          for(int j=i;j<=i;j++)
//          {
//              cout<<j;
//          }
//         // for(int j=;j<=(2*i-1);j++)
//         // cout<<" ";
//         cout << endl ;
//     }
//     for(int t=0;t<2*(n-1)+1;t++)
//     {
//         cout <<n;
//     }
// }




// int main()
// {
//     int n; cin >> n;
//     for(int i=1;i<=n;i++)
//     {
//       for(int j=1;j<=(n-i);j++)
//       cout << " ";

//       for(int j=1;j<=n;j++)
//       {
//         if(i==j)
//         cout<< i;
//         else
//         cout<<" "; 
//       }
//       cout << endl ;


//     }
// }



  /// /triangular double of 1234321 
//   int main()
// {
//     int n;cin>>n;
//       for(int i=1;i<=n;i++){
        
//         for (int j=1;j<=(n-i);j++)
//         { cout <<" ";      }

//         for(int k=1;k<=i;k++)
//           cout << k;

//         for(int t=(i-1);t>=1;t--)
//           cout << t ;  
         
//          cout << endl ;
//        }
// }



/*for
1
21
321
4321 */
//   int main()
// {
//     int n;cin>>n;
//       for(int i=1;i<=n;i++){
        
//         for (int j=i;j>=1;j--)
//         { cout <<j;      }
//         cout << endl ;
//         }
//  }



////triangular incrment dhere dhere
//  int main()
// {
//     int n;cin>>n;
//       for(int i=1;i<=n;i++){
//         for(int j=1;j<=i;j++)
//           cout << j;
//           cout << endl ;
// }}


/*121212121
  212121212  below pgm op
  121212121
  212121212*/
// int main()
// {
//     int n,m;
//     cout<<"n and m: "<<endl ; cin>>n>>m;

//     for(int i=1;i<=n;i++){
//         for(int j=1;j<=m;j++)
//         {
//             if(i%2!=0)
//           cout<<"12";
//            else
//            cout<<"21";
//         }
//         cout << endl ;

//     }
// }




// //I have solved this by myself...love for my mind power..yeppe
// int main()
// {
//     int n;cin>>n;
//     for(int i=1;i<=n;i++)
//     {
//         for(int j=1;j<=n;j++)
//       {
//         if(i==1 || i==n || j==1 || j==n)
//         cout << j ;
//         else
//         cout << " ";      //I here forgotten to write cout<<" ";
//       }
//       cout << endl; 
//     }
// }





// ////Numerical 2_in_one rectangular pattern
// int main()
// {
//  int n;
//  cout<<"n: "; cin>>n;

//  for(int i=1;i<=n;i++)
//  { 
//  for(int j=i;j<=n;j++)
//   { cout <<j; }

//   for(int k=1;k<(i);k++)
//   { cout<<k; }
//                            //   for(int t=1;t<i;t++)
//                           //   {  cout <<t;  }                     //code by vivek

//   cout << endl ;
//  }
//  return 0;
// }



////Numerical rectangular pattern
int main()
{
 int n;
 cout<<"n: ";cin>>n;

 for(int i=1;i<=n;i++){
  for(int j=i;j<=n;j++)
    cout << j;
  cout << endl ;
 }
 return 0;
//abcs is  
}   


////two-side rectangular pattern
// int main()
// {
//     int n;
//     cout <<"n: "; cin>>n;

//     for(int j=1;j<=n;j++)
//     {
//       for(int i=1;i<=(n-j);i++)
//       {  cout << " " ; }

//       for(int k=1;k<=(2*j-1);k++)
//       {  cout << "*";  }

//     cout << endl;
//     }
// }




// //lower trigulr ptrn boy
// int main()
// {
//     int n;
//     cout << "n: "; cin>>n;

//     for(int j=1;j<=n;j++)
//     {
//       for(int i=1;i<=(n-j+1);i++)
//       {  cout << "*" ; }
//     cout << endl;
//     }
// }








// //Triangular Pattern boi
// int main()
// {
//     int n;
//     cout << "n: "; cin>>n;

//     for(int j=1;j<=n;j++)
//     {
//       for(int i=1;i<=j;i++)
//       {  cout << "*" ; }
//     cout << endl;
//     }
// }





// // //hollow square
// int main()
// {
    
//      int r,c;
//     cout << "R & C\n";
//     cin>>r>>c;
//     for(int j=1;j<=r;j++)
//     {
//       for(int i=1;i<=c;i++)
//       { 
//         if(j==1||j==r||i==1||i==c)
//          cout << "*" ;
//         else
//          cout << " ";
//       }
//     cout << endl;
//     }
// }
/*I was getting error in the above pgm by 
2 big mistakes. 
i)condition in the If statement
ii)written j<r , i<c instead of j<=r,i<=c...*/






// //just updated ptrn
// int main()
// {
//     int r,c;
//     cout << "R & C\n";
//     cin>>r>>c;
//     for(int j=0;j<r;j++){
//       for(int i=0;i<c;i++)
//       { cout << "*" ; }
//     cout << endl;
// }
// }
    



// //simple pattern
// int main()
// {
//    for(int j=0;j<3;j++){
//     for(int i=0;i<5;i++)
//     { cout << "*" ; }
//     cout << endl;
// }
// }
    