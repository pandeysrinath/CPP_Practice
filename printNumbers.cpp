#include <iostream>
using namespace std;

int main() {
    int n=0;
    
    while(1){
        n+=1;
       
        if (n%3==0)
        {
            continue;
        }
        else{
            cout<<n<<endl;
        }
        
        if(n>=100)
        break;
    }
   
    return 0;
}
