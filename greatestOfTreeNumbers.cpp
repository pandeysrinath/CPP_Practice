#include <iostream>
using namespace std;

int main() {
    int a,b,c;
    cin>>a>>b>>c;

    if (a>b){
        if(a>c){
            cout<<"Greatest of tree is "<<a<<endl;
        }
        else{
            cout<<"Greatest of tree is "<<c<<endl;
        }
    }
    else{
        if (b>c)
        {
            cout<<"Greatest of tree is "<<b<<endl;
        }
        else{
            cout<<"Greatest of tree is "<<c<<endl;
        }
        
    }



    return 0;
}
