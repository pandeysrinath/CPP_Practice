# include<iostream>
using namespace std;

int main()
{
    int i,j;
    int n;
    cin>>n;

    for ( i = 1; i <= n; i++)
    {
        for ( j = 1; j <= 2*n-1; j++)
        {
            if ( j > n-i+1  && j < i+4 )
            cout<<"  ";
            else
            cout<<"* ";

        }
        cout<<endl;
    }
    for ( i = n; i >= 1; i--)
    {
        for ( j = 1; j <= 2*n-1; j++)
        {
            if ( j > n-i+1  && j < i+4 )
            cout<<"  ";
            else
            cout<<"* ";

        }
        cout<<endl;
    }
    return 0;
}