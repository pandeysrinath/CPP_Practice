#include "/Users/chakreshpandey/Desktop/stdc++.h"
using namespace std;

void sieveOfErtosthenes(int n)
{
    bool isPrime[n+1];
    int count=0;
    for (int i = 0; i < n+1; i++)
        isPrime[i]=true;
    
    for(int i = 2; i*i <= n+1 ; i++){
        if (isPrime[i]==true)
        {
            for (int j = i*i; j < n+1; j+=i)
                isPrime[j] = false; 
            
        }
        
    }
    for (int i = 2; i <= n; i++)
    {
        if(isPrime[i] == true){
        cout<<i<<" ";
        count++;
        }
        
    }
    cout<<endl<<count<<endl;
}

int main()
{
    int n;
    cin>>n;
    sieveOfErtosthenes(n);
    return 0;
}