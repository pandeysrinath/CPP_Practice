#include "/Users/chakreshpandey/Desktop/stdc++.h"
using namespace std;

int firstOcc(int arr[],int n,int i,int key)
{
    if(i==n)
    return -1;

    if(arr[n-i-1]==key)
    return (n-i-1);

    return firstOcc(arr,n,i+1,key);
}

int main()
{
    int n,key,i=0;
    cin>>n;
    int arr[n];

    for (int i = 0; i < n; i++)
        cin>>arr[i];
    
    cin>>key;
    cout<<firstOcc(arr,n,i,key)<<endl;
    return 0;
}

/*
this is another method to check from last

int firstOcc(int arr[],int n,int i,int key)
{
    if(i==-1)
    return -1;

    if(arr[i]==key)
    return i;

    return firstOcc(arr,n,i-1,key);
}
*/