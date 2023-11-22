#include <iostream>
using namespace std;

//pFctVoid is a pointer to a function that returns void and has 0 arguments
typedef void (*pFctVoid)(void); 

//sample functions returning void, having 0 arguments
void foo();
void bar();

pFctVoid Caller(); //prototype

int main()
{
    pFctVoid f = Caller(); //f is set to point to Caller() function

    //calling the function through the f pointer *f() )    
    f(); 
    return 0;
}

void foo()
{
    std::cout << "A\n"; // specific message in function foo()
}
void bar()
{
    std::cout << "B\n";  // specific message in function bar()
}

// This function returns a callable object which either refers to foo or bar
// depending on user input during runtime
pFctVoid Caller() // can't be resolved at compile time --> late binding
{
     std::cout << "Please give a number:\n";
     float x = 0.0;
     std::cin >> x;
     if (x > 50.0) // this inquiry effects in late-binding
{            // if we get an input value > 50
             // then we return a callable that refers to foo
     return{ &foo };
}
    
      // otherwise, we return a callable that refers to bar
return{ &bar };
}