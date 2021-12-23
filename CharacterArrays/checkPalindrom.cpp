#include "/Users/chakreshpandey/Desktop/stdc++.h"
using namespace std;

int main()
{
    int n;
    cin>>n;

    char arr[n+1];
    cin>>arr;

    bool check=false;

    int start=0 , end=n-1;

    while (start <= end)
    {
        if (arr[start] == arr[end])
        {
            check = true;
        }
        else{
            cout<<"Word is not palindrom.";
            return -1;
        }
        start++;
        end--; 
    }
    cout<<"Word is palindrom.";
    return 0;
}