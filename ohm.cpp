#include <iostream>

using namespace std;

class Resistor
{
	protected://protected data accessible within derivate classes 
//but not outside them
		int R;
	public:
		Resistor(int r)
		{//constructor with 1 argument for base class
			R=r;//give R value from r (not vice-versa!)
			//if I would have written r=R, 
//it would allocate a value for R randomly from memory
		}
		virtual void GetR()
		{
			cout<<R<<endl;//display value for R
		}
};

class Voltage:virtual public Resistor //inherit base class by reference
{//upon creating Voltage objects (first derivate class), due to the
//keyword virtual 
//we won’t create a copy of the base class and it will be referenced instead. 
//all objects of type Voltage will reference class Resistor without 
//creating copies in memory for each of these objects
	protected:
		double U;
		double I;// protected data accessible within derivate classes
				// but not outside them
	public:
		Voltage(double u,int r):Resistor(r)//call constructor for class Resistor 
		//because it does not implicitly get inherited by derived classes
		{
U=u;//constructor with 2 parameters, one inherited (R) and another 
//one whose value is attributed here in the constructor (U)
		}
		
		virtual void ComputeCurrent()
		{//compute value of Current from Voltage (set in this derivate class)
		//and by the Resistor (inheritance)
			I=U/R;
		}
virtual void GetI()
		{//display computed value
			cout<<I<<endl;
		}
};//end of class with semicolon character ; !

class Current:virtual public Resistor
{//upon creating Current objects (first derivate class), due to the
//keyword virtual 
//we won’t create a copy of the base class and it will be referenced instead. 
//all objects of type Current will reference class Resistor without 
//creating copies in memory for each of these objects
	protected:
		double U;
		double I;// protected data accessible within derivate classes
				// but not outside them
	public:
		Current(double i,int r):Resistor(r)//call constructor of Resistor class
		//as it is not implicitly inherited in derived classes
		{
I=i; //constructor with 2 parameters, one inherited (R) 
// and another one whose value is attributed here in the constructor (I)

		}
		
		virtual void ComputeVoltage()
		{
			U=I*R;//compute Voltage from Current 
			//(set in this derived class) and from Resistor (inherited)
		}
		
		virtual void GetU()
		{//display computed value
			cout<<U<<endl;
		}
}; //end of class with semicolon character ; !

class OHMsLaw:public Voltage, public Current
{//class OHMsLaw inherits 2 classes, so multiple inheritance from both 
//Voltage class and Current class
	public:
		OHMsLaw(double i, double u, int r):Current(i,r), Voltage(u,r),Resistor(r)
              //constructor with 3 parameters, all inherited
		{ 
			cout <<"passing through constructor with 3 parameters "<<endl;
			//this constructor only displays a message, does nothing else
		}
}; //end of class with semicolon character ; !

int main()
{
	OHMsLaw L1(0.01, 10, 1000);//create an multiple inheritance object  
	L1.ComputeVoltage();//call Voltage compute function
	L1.ComputeCurrent();//call Current compute function
	L1.GetR();//display R
	L1.GetU();//display U
	L1.GetI();//display I
}