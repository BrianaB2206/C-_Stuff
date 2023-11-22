#include <iostream>
#include <iomanip>
using namespace std;

class Product
{
    string Name;
    float Price;
    float Weight;
    
    public:
    void SetName (string N)
    
    {
        Name=N;
    }
    
    void SetPrice (float P)
    
    {
        Price=P;
    }
    
    void SetWeight (float W)
    
    {
        Weight=W;
    }
    
    string GetName()
    
    {
        return Name;
    }
    
    float GetPrice()
    
    {
        return Price;
    }
    
     float GetWeight()
    
    {
        return Weight;
    }
    
    Product(); //implicit constructor
    Product(string _nameconstr, float _priceconstr, float _weightconstr);
};

Product::Product()

{
    Name="Bread";
    Price=0.99;
    Weight=1.00;
}

Product::Product(string _nameconstr, float _priceconstr, float _weightconstr)

{
    Name=_nameconstr;
    Price=_priceconstr;
    Weight=_weightconstr;
}


int main()

{
    
    string A;
    float B, C;
    cin>>A>>B>>C;
    Product p1;
    Product p2;
    p1.SetName(A);
    p1.SetPrice(B);
    p1.SetWeight(C);
    cin>>A>>B>>C;
    p2.SetName(A);
    p2.SetPrice(B);
    p2.SetWeight(C);
    cout<<setprecision(3)<<fixed;
    cout<<"Counter price: "<<p1.GetPrice()*p1.GetWeight()+p2.GetPrice()*p2.GetWeight()<<endl;
    p1.SetWeight(1.0);
    p2.SetPrice(9.99);
    cout<<"Counter price: "<<p1.GetPrice()*p1.GetWeight()+p2.GetPrice()*p2.GetWeight()<<endl;
}

