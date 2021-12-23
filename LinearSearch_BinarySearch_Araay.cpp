#include "/Users/chakreshpandey/Desktop/stdc++.h"
using namespace std;

int linerSearch(int arr[],int n,int k)
{ 
   int ans = -1;
   for (int i = 0; i < n; i++)
   {
       if(k==arr[i])
           ans = i;
        else
           continue;
       
    }
    return ans;
}

//Array must be sorted in increasing order.
int BinarySearch(int arr[],int n,int k)
{
   int start = 0;
   int end = n;
   int mid;
   while (start <= end)
   {
       mid = (end + start)/2;
       
       if (arr[mid]==k)
           return mid;
       
       else if (k > arr[mid])
        start = mid+1;

       else
        end = mid-1;    
   }
   return -1;
   
}

int main()
{
   int n;
   cin>>n;
   int arr[n];

   for (int i = 0; i < n; i++)
       cin>>arr[i];
    
    int key;
    
    cout<<"Enter the key: ";
    cin>>key;

    cout<<"The key is present at index "<<BinarySearch(arr,n,key)<<endl;
    return 0;
}