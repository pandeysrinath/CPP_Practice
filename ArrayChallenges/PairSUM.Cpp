#include "/Users/chakreshpandey/Desktop/stdc++.h"
using namespace std;

//for this method array must be sorted.
bool pairSum(int arr[],int n,int k)
{
    int low = 0;
    int high = n-1;

    while (low<high)
    {
        if (arr[low]+arr[high]==k)
        {
            cout<<low<<" "<<high<<endl;
            return true;
        }
        else if (arr[low] + arr[high] > k)
           high--;
        else
           low++;
    }
    return false;
}
int main()
{
    int n,k;
    cin>>n;
    cin>>k;
    int arr[n];
    
    for (int i = 0; i < n; i++)
        cin>>arr[i];

    cout<<pairSum(arr,n,k)<<endl;
    return 0;
}