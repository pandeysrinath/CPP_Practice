#include "/Users/chakreshpandey/Desktop/stdc++.h"
using namespace std;

void BubbleSort(int arr[],int n){

    for ( int i = 1; i <= n-1; i++)
    {
        for (int j = 0; j < n-i; j++)
        {
            if (arr[j] > arr[j+1])
            {
                int temp = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = temp;
            }
            
        }
        
    }
}

int main()
{
   int n;
   cin>>n;
   int arr[n];

   for (int i = 0; i < n; i++)
      cin>>arr[i];

    BubbleSort(arr,n);
    cout<<endl;

    // for (int i = 0; i < n; i++)
    //    cout<<arr[i]<<" ";

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n-i; j++)
            cout<<arr[j]<<" ";
        int k=0;
        for (int j = i; j > 0; j--){
            cout<<arr[k]<<" ";
            k++;
        }
        cout<<endl;
    }

    return 0;       
}