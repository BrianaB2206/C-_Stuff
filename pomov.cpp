#include <iostream>
using namespace std;

class printData //class name
{
	public: //all methods public with the same name
	//print method is overloaded by polymorphism
		void print(int i) 
		{//method print with 1 argument of type int
			cout << "Printing int: " << i << endl;
		}
 		void print(double f) 
		{//method print with 1 argument of type double
			cout << "Printing float: " << f << endl;
		}
void print(char* c) 
		{//method print with 1 argument of type pointer to char (char *)
			cout << "Printing character: " << c << endl;
		}
};

int main(void)
{
	printData pd;//create object of type printData
	char *sir = "This is C++";	// we can do dynamic allocation here

	// Call function variant with 1 integer argument
	pd.print(5);
	
	// Call function variant with 1 float argument
	pd.print(500.263);

	// Call function variant with char * (to a set of characters) argument
	pd.print(sir);

	return 0;
}