#include "/Users/chakreshpandey/Desktop/stdc++.h"
using namespace std;

int main(){
    int n;
    cin>>n;
    int arr[n];

    int maxNo = INT_MIN;
    int minNo = INT_MAX;

    for (int i = 0; i < n; i++)
        cin>>arr[i];
    
    for (int i = 0; i < n; i++)
    {
        maxNo = max(maxNo,arr[i]);
        minNo = min(minNo,arr[i]);
    }

    cout<<minNo<<" "<<maxNo<<endl;

    return 0;
}