#include <iostream>
using namespace std;

int sum(int x)
{
    if(x==1 || x==2)
        return(x-1);
    else
    return (sum(x-1)+sum(x-2));
}


int main()
{
  int N,i;
  
  cout<<"Enter number of Terms: ";
  cin>>N;
  
  cout<<"The Required Fabonacci Series is\n";
  
  for (i=1;i<=N;i++)
     cout<<sum(i)<<",";
  cout<<endl;

  return 0;
}
