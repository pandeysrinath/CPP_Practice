#include "/Users/chakreshpandey/Desktop/stdc++.h"
using namespace std;

int main(){
    int n;
    cin>>n;
    int arr[n];

    for (int i = 0; i < n; i++)
        cin>>arr[i];
    
    int ans = 2;
    int d = arr[1]-arr[0];
    int j = 2;
    int count=2;

    while (j<n)
    {
        if(d == arr[j]-arr[j-1])
            count++;
        else
        {
            d = arr[j] - arr[j-1];
            count = 2;
        } 
        ans = max(ans,count);
        j++;
    }
    cout<<ans<<endl;   
    return 0;
}