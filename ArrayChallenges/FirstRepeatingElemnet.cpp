#include "/Users/chakreshpandey/Desktop/stdc++.h"
using namespace std;

int main()
{
    int n;
    cin>>n;
    int arr[n];

    for (int i = 0; i < n; i++)
        cin>>arr[i];
    
    int N = 1e6+2;
    int freq[N];

    for (int i = 0; i < N; i++)
        freq[i] = -1;

    for (int i = 0; i < n; i++)
       freq[arr[i]]++;
        
    for (int i = 0; i < n; i++)
    {
        if (freq[arr[i]] >= 1)
        {
            cout<<i+1<<endl;
            break;
        }
        
    }
    return 0;
}