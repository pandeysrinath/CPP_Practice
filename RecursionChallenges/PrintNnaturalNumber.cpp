#include "/Users/chakreshpandey/Desktop/stdc++.h"
using namespace std;

void printDecreasing(int n)
{
    if(n==1){
    cout<<"1"<<" ";
    return;
    }
    cout<<n<<" ";
    printDecreasing(n-1);
}

void printIncreasing(int n)
{
   if(n==1){
    cout<<n<<" ";
    return;
    }

    printIncreasing(n-1);
    cout<<n<<" ";
}

int main()
{
    int n;
    cin>>n;
    
    printDecreasing(n);
    cout<<endl;
    printIncreasing(n);

    return 0;
}