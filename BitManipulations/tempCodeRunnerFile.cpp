#include "/Users/chakreshpandey/Desktop/stdc++.h"
using namespace std;

int getBit(int n,int pos)
{
    return (((1 << pos) & n) != 0);
}

int setBit(int n , int pos)
{
    return ((1 << pos) | n);
}

int main()
{
    int n;
    cin>>n;
    //cout<<getBit(n,2)<<endl;
    cout<<setBit(n,1)<<endl;
    return 0;
    

}