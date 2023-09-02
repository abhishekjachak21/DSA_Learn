#include<iostream>
#include<vector>
using namespace std ;

int main()
{
    int n,m;
    cin>>n>>m;
    vector<vector<int>>vec(n,vector<int>(m));
    int col=vec[0].size();
    int nOfOnes=0;int indo=-1;
   
    int maxNo1sRow = -1 ; //cz we need index here...so 0 shudnot exist here
  
    for(int i=0;i<n;i++){
    for(int j=0;j<m;j++){
        cin>>vec[i][j];
    }}

    for(int i=0;i<n;i++){
    for(int j=0;j<m;j++){
        if(vec[i][j]==1) 
        {nOfOnes=col-j;
         indo=i;
        if(nOfOnes > maxNo1sRow) 
        {maxNo1sRow=nOfOnes;
        break;}
        }
    }}
    cout<<"max ones: "<<maxNo1sRow<<" at "<<indo<<"th row!\n";
    if(maxNo1sRow=-1) cout<<"Invalid !\n";
    if(indo=-1) cout<<"Invalid !\n";

    return 0;
}
