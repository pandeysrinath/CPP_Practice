#include "/Users/chakreshpandey/Desktop/stdc++.h"
using namespace std;

int binaryToDecimal(int n){
    int ans = 0;
    int x = 1;
    while (n > 0)
    {
        int y = n%10;
        ans += x*y;
        x *= 2;
        n /= 10;
    }
    return ans;
}

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
    int a,b;
    cin>>a>>b;

    int add_of_binary = decimalToBinary(binaryToDecimal(a) + binaryToDecimal(b));

    cout<<add_of_binary<<endl;
    return 0;

}