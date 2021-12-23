#include "/Users/chakreshpandey/Desktop/stdc++.h"
using namespace std;

void primeFactor(int n)
{
    int spf[n+1];
    
    for (int i = 2; i < n+1; i++)
        spf[i]=i;
    
    for(int i = 2; i*i < n+1 ; i++){
        if (spf[i]==i)
        {
            for (int j = i*i; j < n+1; j+=i){
                if(spf[j] == j)
                   spf[j]=i; 
            }
            
        }
        
    }
    while(n!=1){
        cout<<spf[n]<<" ";
        n=n/spf[n];
    }
  
}

int main()
{
    int n;
    cin>>n;
    primeFactor(n);
    return 0;
}