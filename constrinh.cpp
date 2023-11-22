#include<iostream>
using namespace std;
class BASE
{
    int x;
    public:
        void initX(int n) { x = n; }
        void displayX() { 
          cout << "The variable x (displayed in the parent class):" << x << endl;}
        
    BASE(int a) {x = a; cout << "In base";}    
    BASE(){x=0; cout <<"In base";}
};
class DERIVED : private BASE
{
    using BASE::BASE;
    int y;
    public:
        void initXY(int n, int m) { initX( n ); y = m;}
        void displayY() { cout << "The variable y (in the child): " << y << endl; }
        void displayXY()
{
            cout << "Variable x (displayed in the child): ";
            displayX();
            cout << " and the variable y: " << y << endl;
         }
};
int main()
{
        DERIVED d;
        DERIVED d2(0);
        return 0;
}