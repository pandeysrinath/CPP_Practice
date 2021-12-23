#include<iostream>
#include<cmath>
using namespace std;

// int main()
// {
// int n,rem;
// int revNum=0;
// cin>>n;

// int num_of_digits = log10(n)+1;
// int i = num_of_digits-1;

// while (n>0)
// {
//     rem = n%10;
//     n = n/10;
//     revNum = revNum + rem*pow(10,i);
//     i-=1;
// }

// cout<<revNum<<endl;
// return 0;
// }

int main()
{
    int n;
    cin>>n;

    int reverse=0;
    while(n>0)
    {
        int lastdigit = n%10;
        reverse = reverse*10 + lastdigit;
        n = n/10;
    }
    cout<<reverse<<endl;
    return 0;
}
