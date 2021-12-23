# include<iostream>
using namespace std;

int main()
{
    int n;
    int i , j;

    cin>>n;
    int k=1;
    for ( i = 1; i <= n; i++)
    {
       for ( j = 1; j <= 2*n-1; j++)
       {
            if ( j > n-i && j < n+i )
            {
                cout<<"* ";
            }
            else
            {
                cout<<"  ";
            }
        
}
       cout<<endl;
    }
    
}