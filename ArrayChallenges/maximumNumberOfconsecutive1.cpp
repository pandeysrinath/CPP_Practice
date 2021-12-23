#include "/Users/chakreshpandey/Desktop/stdc++.h"
using namespace std;

int main()
{
    int arr[] = {1,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1};
    int size = sizeof(arr)/sizeof(int);

    int mxSum = INT_MIN;
    int currSum = 0;
    for (int i = 0; i < size-1; i++)
    {
        if (arr[i]==1 && arr[i+1]==1)
        {
          currSum+=1;
        }
        else
        currSum = 0;
        
        mxSum = max(mxSum,currSum);
    }

    cout<<(mxSum+1)<<endl;
    return 0;

}