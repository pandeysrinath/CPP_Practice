#include "/Users/chakreshpandey/Desktop/stdc++.h"
using namespace std;

struct book
{
 private: // no one use theese attributes outside the structure body'

   int bookId;
   char title[30];    // Member Variables.
   float price;
 
 public:  // only public member functions has right to acces private attributes.
   
   void input(){      // Member Function of abstract datatype ie book
    cout<<"Enter bookId, price and title of book:";
    cin>>bookId>>price>>title;
    if(bookId < 0)
       bookId = -bookId;
   }

   void display(){   // Member Function abstract datatype ie book
    cout<<endl<<bookId<<" "<<title<<" "<<price<<endl;
   }
};

int main()
{
   book b1;
   b1.input();
   b1.display();

   return 0;
}

/*
here book a object and member function its methods.
It is an example of Encapsulation.
using private access specifire we secure our data.
*/