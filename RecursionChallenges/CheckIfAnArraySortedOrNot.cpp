#include "/Users/chakreshpandey/Desktop/stdc++.h"
using namespace std;

bool isSorted(int arr[],int n)
{
    if (n==1)
        return true;
    
    bool restArray = isSorted(arr+1,n-1);
    return (arr[0]<arr[1] && restArray);
}

int main(int argc, char const *argv[])
{
    int n;
    cin>>n;
    int arr[n];

    for (int i = 0; i < n; i++)
        cin>>arr[i];
    
    cout<<isSorted(arr,n)<<endl;

    return 0;
}
