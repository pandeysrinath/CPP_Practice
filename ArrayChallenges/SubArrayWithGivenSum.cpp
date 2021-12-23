#include "/Users/chakreshpandey/Desktop/stdc++.h"
using namespace std;

int main(){
    int n,s;
    cin>>n>>s;
    int arr[n];
    
    for (int i = 0; i < n; i++)
        cin>>arr[i];
    
    int i=0,j=0,sum=0;
    int start,end;

    while (j < n && sum <= s)
    {
        sum += arr[j];
        if (sum == s)
        {
            cout<<i+1<<" "<<j+1;
            return 0;
        }
        end = j;
        j++;
    }
     start = i;
     while (sum != s)
        {
            sum -= arr[start];
            ++start;
            if (sum == s)
            {
                cout<<start+1<<" "<<end+1<<endl;
                break;
            }
           
        }
    

    return 0;
}