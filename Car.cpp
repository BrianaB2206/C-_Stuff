#include <iostream>
#include <iomanip>
using namespace std;

class Car
{
    
    string Name;
    float Mileage;
    float Tank;
    
    public:
    void SetName (string N)
    {
        Name=N;
    }
    
    void SetMileage (float M)
    {
        Mileage=M;
    }
    
    void SetTank (float T)
    {
        Tank=T;
    }
    
    float GetTank()
    {
        return Tank;
    }
    
    string GetName()
    {
        return Name;
    }
    
    float GetMileage()
    {
        return Mileage;
    }
    
    Car();// implicit construtor
    Car(string _nameconstr, float _mileconstr, float _tankconstr);
};

Car::Car()
{
    Name="Ford";
    Mileage=20.0;
    Tank=80.0;
}

Car::Car (string _nameconstr, float _mileconstr, float _tankconstr)
{
    Name=_nameconstr;
    Mileage=_mileconstr;
    Tank=_tankconstr;
}

int main()
{
    string A;
    float B, C;
    cin>>A>>B>>C;
    Car C1;
    Car C2;
    C1.SetName(A);
    C1.SetMileage(B);
    C1.SetTank(C);
    cin>>A>>B>>C;
    C2.SetName(A);
    C2.SetMileage(B);
    C2.SetTank(C);
    cout<<setprecision(3)<<fixed;
    cout<<"Km until out of gas: "<<C1.GetTank()*100/C1.GetMileage()+C2.GetTank()*100/C2.GetMileage()<<endl;
    C1.SetTank(100.0);
    C2.SetMileage(5.0);
    cout<<"Km until out of gas: "<<C1.GetTank()*100/C1.GetMileage()+C2.GetTank()*100/C2.GetMileage()<<endl;
}






