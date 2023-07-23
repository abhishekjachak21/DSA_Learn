#include <iostream>
#include <vector>

using namespace std;

vector<int> subarraySum(vector<int> A, int N, long long S)
{
    int s=0,e=0,sum=0;

    if(S==0 ) return {-1};  //this condition was harder to get into ! plz focus

    while(e <=N){
        
        if(sum == S) return {s+1,e};
        
        else if(sum < S){
            sum += A[e];
            e++;
        }
        
        else {
            sum -= A[s];
            s++;
        }
    }
    
    return {-1};
}

int main()
{
    int n;
    cin >> n;

    vector<int> arr(n);
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    long long s;
    cin >> s;

    vector<int> result = subarraySum(arr, n, s);

    for (int i = 0; i < result.size(); i++)
    {
        cout << result[i] << " ";
    }
    cout << endl;

    return 0;
}
