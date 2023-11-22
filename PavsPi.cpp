#include <iostream>    
using namespace std;

class BASE
{
protected: 
   int x;//accessible only 
         //to child classes
public:
   void printX(){cout << x;}
};
class DERIVED:public BASE
{
   int y;
public:
   void printXY() {
     cout << x;
     cout << y;}
}; 

int main() 
{DERIVED d1;
/*cout <<d1.x;*/
return 0;}