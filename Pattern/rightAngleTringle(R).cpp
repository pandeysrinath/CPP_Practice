# include<iostream>
using namespace std;

int main()
{
    int row;
    int i , j;

    cin>>row;

    for ( i = 1; i <= row; i++)
    {
       for ( j = 1; j <= row; j++)
       {
            if (j>(row-i))
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