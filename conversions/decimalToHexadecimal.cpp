#include "/Users/chakreshpandey/Desktop/stdc++.h"
using namespace std;

string decimalToHexadecimal(int n){
    int x=1;
    string ans ="";
    
    while (x <= n)
        x *= 16;
    x /= 16;

    while (x > 0 )
    {
        int last_dig = n/x;
        n -= last_dig*x;
        x /= 16;

        if (last_dig <= 9)
        {
            ans = ans + to_string(last_dig);
        }
        else
        {
            char c = 'A' + last_dig - 10;
            ans.push_back(c);
        }
    }
    return ans;
    
}

int main(){
    int n;
    cin>>n;

    cout<<decimalToHexadecimal(n)<<endl;
    return 0;
}
