#include "/Users/chakreshpandey/Desktop/stdc++.h"
using namespace std;

int main()
{
    int arr[] = {1,2,3,4,3,2,1,5};
    int size = sizeof(arr)/sizeof(int);
    //cout<<size<<endl;
    int mx = INT_MIN;
    for(int i=0; i<size; i++){
      if(arr[i]>mx){
        mx = arr[i];
      }
    }

    int freq[mx+1];
    
    for (int i = 0; i <= mx; i++)
        freq[i] = 0;

    for (int i = 0; i < size; i++)
        freq[arr[i]]++;
    
    for (int i = 0; i <= mx; i++)
    {
        if (freq[i] == 1)
            cout<<i<<endl;
        
    }
    return 0;
}