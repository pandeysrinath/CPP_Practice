#include<iostream>
using namespace std;

bool checkArmstrong(int n){
    int n_copy = n;
    int dig_cube_sum = 0;
    while (n>0)
    {
        int lastdigit = n%10;
        dig_cube_sum += lastdigit*lastdigit*lastdigit;
        n = n/10;
    }
    if(dig_cube_sum == n_copy) 
    return true;
    else
    return false;
}

int main()
{
    int a,b;
    int count=0;
    cin>>a>>b;
    for (int i = a; i <= b; i++)
    {
            if(checkArmstrong(i))
            {
                count+=1;
                cout<<i<<endl;
            }
    }
    cout<<"Total Armstron Numbers from "<<a<<" to "<<b<<" is "<<count<<endl;
    return 0;
}