#include<iostream>
using namespace std;

bool check_p_tri(int a,int b,int c)
{
    int maximum;
    maximum = max(a,max(b,c));

    if (maximum == a && (a*a == (b*b + c*c)) )
        return true;
    else if (maximum == b && (b*b == (a*a + c*c)))
        return true;
    else if (maximum == c && (c*c == (a*a + b*b)))
        return true;
    else
        return false;
    
}

int main()
{
   int a,b,c;
   cin>>a>>b>>c;

   if(check_p_tri(a,b,c))
   cout<<"Given triplet is a pythagorian triplet.";
   else
   cout<<"Given triplet is not a pythagorean triplet.";

   return 0;
}