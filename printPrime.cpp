#include<iostream>
#include<math.h>
using namespace std;

bool checkPrime(int n){
    int i = 2;
    int count = 0; 
    while (i*i <= n)
    {
        if(n%i==0){
            count++;
            break;
        }
        i++;
    }
    if(count == 0 && n!=1)
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
            if(checkPrime(i))
            {
                count+=1;
                cout<<i<<endl;
            }
    }
   
    cout<<"total prime numbers from "<<a<<" to "<<b<<" is "<<count<<endl;
    return 0;
}