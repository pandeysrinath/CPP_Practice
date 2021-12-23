#include "/Users/chakreshpandey/Desktop/stdc++.h"
using namespace std;

unsigned int binaryToDecimal(string n){
    unsigned int ans = 0;
    unsigned int x = 1;
    int s = n.size();
    for (int i = s-1; i >= 0; i--)
    {
        ans += x*(n[i]-'0');
        x *= 2;
    }
    return ans;
}

int main()
{
    int dec;
    cout << "Enter the decimal to be converted: ";
    cin >> dec;

    string str(32,'0');
    for (int pos = 0; pos < 32; pos++)
    {
        if (dec % 2) 
            str[pos] = '1';
        dec /= 2;
    }
    cout << binaryToDecimal(str) << endl;
    return 0;
}