#include<iostream>
using namespace std;

int euclidAlgo(int a,int b)
{
   int rem;
   while(a%b!=0){
       rem = a%b;
       a = b;
       b = rem;
   }
   return b;
}

int main()
{
    int n,m;
    cin>>n>>m;
    cout<<euclidAlgo(max(n,m),min(n,m))<<endl;
    return 0;
}


// n = 24 m = 42
// 42%24 = 18
// 24%18 = 6
// 18%6 = 0

// HCF of n=24 and m=42 is 6