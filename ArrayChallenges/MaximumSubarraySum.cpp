#include "/Users/chakreshpandey/Desktop/stdc++.h"
using namespace std;

// int main()
// {
//     int n;
//     cin>>n;
//     int arr[n];

//     for (int i = 0; i < n; i++)
//         cin>>arr[i];

//     for (int i = 0; i < n; i++)
//     {
//         if (arr[i] < 0)
//         {
//             arr[i] = -1;
//         }
        
//     }

//     int max_sum = 0;
    
//     for (int i = 0; i < n; i++)
//     {
        
//         if (arr[i] >= 0)
//         {   
//             max_sum += arr[i];
//             cout<<arr[i]<<" ";
//         }
        
//     }
//     cout<<endl<<max_sum<<endl;
//     return 0;
// }

// Kadanes's algorithm

int main(){

    int n;
    cin>>n;
    int arr[n];
    int s=0,start=0,end=0;

    for (int i = 0; i < n; i++)
        cin>>arr[i];
    
    int currentSum = 0;
    int maxSum = INT_MIN;

    for (int i = 0; i < n; i++)
    {
        currentSum += arr[i];
        if (maxSum < currentSum)
        {   
            maxSum = currentSum;
            start = s;
            end = i;
        }
        if (currentSum < 0)
        {
            currentSum = 0;
            s=i+1;
        }
        //maxSum = max(maxSum,currentSum);
    }
    cout<<maxSum<<endl;
    for (int i = start; i <= end; i++)
    {
        cout<<arr[i]<<" ";
    }
    return 0;
}