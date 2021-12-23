# include<iostream>
using namespace std;

int main()
{
    int n;
    int i , j;
    cin>>n;

    for ( i = 1; i <= n; i++)
    {
       for ( j = 1; j <= 2*n; j++)
       {
            if (j <= 2*n-i && j > i)
            {
                cout<<"  ";
            }
            else
            {
                cout<<"* ";
            }
        }
       cout<<endl;
    }

    for ( i = n; i >= 1; i--)
    {
       for ( j = 1; j <= 2*n; j++)
       {
            if (j <= 2*n-i && j > i)
            {
                cout<<"  ";
            }
            else
            {
                cout<<"* ";
            }
        }
       cout<<endl;
    }
    
}