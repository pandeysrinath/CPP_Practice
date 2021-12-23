#include<iostream>
using namespace std;

unsigned long long int fact(int n){
    if(n==1)
    return 1;

    int PrevFact = fact(n-1);
    return n*PrevFact;
}
int main()
{
    int n;
    cin>>n;
    cout<<fact(n)<<endl;
    return 0;
}