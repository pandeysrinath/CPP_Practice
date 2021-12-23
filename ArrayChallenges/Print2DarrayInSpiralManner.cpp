#include "/Users/chakreshpandey/Desktop/stdc++.h"
using namespace std;

int main(){
    int n,m;
    cin>>n>>m;
    int arr[n][m];

    for (int i = 0; i < n; i++)
    {
        for ( int j = 0; j < m; j++)
            cin>>arr[i][j];
        
    }
    
    int row_start = 0,row_end = n-1,colm_start = 0,colm_end = m-1;

    while (row_start <= row_end && colm_start <= colm_end)
    {   
        // for row_start
        for (int colm = colm_start; colm <= colm_end; colm++)
        {
            cout<<arr[row_start][colm]<<" ";
        }
        row_start++;
        // for colm_end
        for (int row = row_start; row <= row_end; row++)
        {
            cout<<arr[row][colm_end]<<" ";
        }
        colm_end--;
        // for row_end
        for (int colm = colm_end; colm >= colm_start; colm--)
        {
            cout<<arr[row_end][colm]<<" ";
        }
        row_end--;
        // for colm_start
        for (int row = row_end; row >= row_start; row--)
        {
            cout<<arr[row][colm_start]<<" ";
        }
        colm_start++;
    }
    

}