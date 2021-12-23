#include "/Users/chakreshpandey/Desktop/stdc++.h"
using namespace std;

int main()
{
    int n;
    cin>>n;
    int n_copy = n;
    int dig_cube_sum = 0;

    while (n>0)
    {
        int lastdigit = n%10;
        dig_cube_sum += lastdigit*lastdigit*lastdigit;
        n = n/10;
    }
    if(dig_cube_sum == n_copy) 
    cout<<"Given Number is an strong Number."<<endl;
    else
    cout<<"Given Number ia a Normal Number."<<endl;
    return 0;
}