#include<iostream>
using namespace std;

int sum_of_n(int n){
    int i, sum=0;
    for ( i = 1; i <= n; i++)
    {
        sum+=i;
    }
    return sum;
    
}

int main()
{
    int n;
    cin>>n;

    cout<<sum_of_n(n)<<endl;
    return 0;

}