#include<iostream>
using namespace std;

int fact(int n){
    int factorial=1;
    for (int i = n; i >= 2; i--)
    {  
        factorial = factorial*i; 
    }
    return factorial;
}

int main(){
    int n;
    cin>>n;
    cout<<fact(n)<<endl;
    return 0;
}