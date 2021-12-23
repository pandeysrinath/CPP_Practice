#include "/Users/chakreshpandey/Desktop/stdc++.h"
using namespace std;

int main(){
    int N;
    cin>>N;
    int arr[N][N];

    for (int i = 0; i < N; i++)
    {
        for ( int j = 0; j < N; j++)
            cin>>arr[i][j];
    }
    
    for (int i = 0; i < N; i++)
    {
        for ( int j = i; j < N; j++){
            //swap
            int tmp = arr[i][j];
            arr[i][j] = arr[j][i];
            arr[j][i] = tmp;
        }
    }
    
    // print
    for (int i = 0; i < N; i++)
    {
        for ( int j = 0; j < N; j++)
            cout<<arr[i][j]<<" ";
        cout<<endl;
    }


return 0;
}