#include<iostream>
using namespace std;
//question from apna clg course dsa cpp

int main(){
    
    int arr[4][4]={{1,2,3,4},{5,6,7,8},{9,10,11,12},{13,14,15,16}};

    int top=0,bottom=3,left=0,right=3;  //n*m => n=4, m=4
    int sum=0;

    while(top<=bottom && left<=right){

        for (int i = left; i <= right; i++)
        {
           if(top==i || bottom==i) sum +=arr[top][i];
        } top++;

        for (int i = top; i <= bottom; i++)
        {
            if(i==right || left==i)sum +=arr[i][right];
        } right--;

        for (int i = right; i >= left; i--)
        {
            if(i==bottom || top==i)sum +=arr[bottom][i];
        }bottom--;

        for (int i = bottom; i >= top; i--)
        {
            if(i==left || right==i) sum +=arr[i][left];
        }left++;
        
    }
    cout << "Diagonal Sum: "<<sum<<endl;

    return 0;
}