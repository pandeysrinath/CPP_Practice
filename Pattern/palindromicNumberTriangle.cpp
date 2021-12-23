# include<iostream>
using namespace std;

int main()
{
    int n;
    int i , j;

    cin>>n;
    
    for ( i = 1; i <= n; i++)
    {
       for ( j = 1; j <= 2*n-1; j++)
       {
            if ( j > n-i && j < n+i )
            { 
                if(j > n)
                cout<<j-(n-1)<<" ";
                else
                cout<<n+1-j<<" ";
            }
            else
            {
                cout<<"  ";
            }
        
}
       cout<<endl;
    }
    
}