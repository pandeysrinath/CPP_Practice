// #include<iostream>
// using namespace std;

// long int fact(int n){
//     int factorial=1;
//     for (int i = 2; i <= n; i++)
//     {  
//         factorial = factorial*i; 
//     }
//     return factorial;
// }

// int main()
// {
//     int n,r;
//     cin>>n>>r;
//     long int Bin_Coeff;

//     if (n>=r){
//         Bin_Coeff = fact(n)/( fact(r)*fact(n-r) );
//         cout<<Bin_Coeff<<endl;}
//     else
//     cout<<"you entered inconsistent data.";
//     return 0;
// }

#include<iostream>
using namespace std;

long int fact(int n){
int factorial=1;
for(int i=2;i<=n;i++){
factorial*=i;
}
return factorial;
}

int main(){

int n,r;
cin>>n>>r;

long int ans = fact(n)/(fact(r)*fact(n-r));
cout<<ans<<endl;

return 0;
}