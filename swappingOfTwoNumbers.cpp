#include <iostream>
using namespace std;

void swap(int *p,int *q)
{
    int tmp = *p;
    *p = *q;
    *q = tmp;
}

int main()
{
    int a,b;
    cin>>a>>b;

    swap(&a,&b);

    cout<<"a = "<<a<<" "<<"b = "<<b<<endl;
    return 0;
}