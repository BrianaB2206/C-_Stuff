#include <iostream>
using namespace std;

float do_add(float a, float b)
{
    return a+b;
}
float do_div(int a, int b)
{
    return float(a/b);
}

int main ()
{
    int a=0.99;
    float b=3;
    
    cout<<a<<endl<<b<<endl;
    cout<< do_add(1,0)<<endl<<endl;
    
    int c=(int)0.99;
    float d = (float)3;
    
    cout<<c<<endl<<d<<endl;
    
}