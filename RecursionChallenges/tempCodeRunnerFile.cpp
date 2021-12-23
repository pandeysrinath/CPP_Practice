#include "/Users/chakreshpandey/Desktop/stdc++.h"
using namespace std;

int firstOcc(int arr[],int n,int i,int key)
{
    if(i==-1)
    return -1;

    if(arr[i]==key)
    return i;

    return firstOcc(arr,n,i-1,key);
}

int main()
{
    int n,key;
    cin>>n;
    int i=n-1;
    int arr[n];

    for (int i = 0; i < n; i++)
        cin>>arr[i];
    
    cin>>key;

    cout<<firstOcc(arr,n,i,key)<<endl;
    return 0;
}