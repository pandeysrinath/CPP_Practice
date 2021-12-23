#include <iostream>

using namespace std;

int main()
{
    int n,i;
    i=2;
    
    cin>>n;

    while (i<n)
    {
        if(n%i==0)
        break;
        else{
            i+=1;
        }
    }

    if(i==n)
    cout<<"Given number is Prime"<<endl;
    else
    cout<<"Given number is a composite number"<<endl;
    
    return 0;
}