#include <iostream>
#include <stdlib.h>
using namespace std;

int decimalToBinary(int n){
    int ans = 0;
    int x = 1;
    while (x <= n)
        x *= 2;
    x /= 2;

    while (x > 0)
    {
        int last_dig = n/x;
        n -= last_dig*x;
        x/=2;
        ans = ans*10 + last_dig;
    }
    return ans;
}

int main(){
    int n;
    cin>>n;

    cout<<decimalToBinary(n)<<endl;
    return 0;
}
