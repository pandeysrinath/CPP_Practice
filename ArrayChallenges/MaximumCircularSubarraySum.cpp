#include "/Users/chakreshpandey/Desktop/stdc++.h"
using namespace std;

int KadanesSum(int arr[],int n)
{
    int currentSum = 0;
    int maxSum = INT_MIN;

    for (int i = 0; i < n; i++)
    {
        currentSum += arr[i];
        if (currentSum < 0)
            currentSum = 0;
        maxSum = max(maxSum,currentSum);
    }
    return maxSum;
}
int main()
{
    int n;
    cin>>n;
    int arr[n];

    for (int i = 0; i < n; i++)
        cin>>arr[i];

    int wrapsum;
    int nonWrapsum;

    nonWrapsum = KadanesSum(arr,n);
    int totalSum = 0;
    for (int i = 0; i < n; i++)
    {
        totalSum += arr[i];
        arr[i] = -arr[i];
    }
     
    wrapsum = totalSum + KadanesSum(arr,n);
    cout<<max(wrapsum,nonWrapsum)<<endl;
    return 0;

}