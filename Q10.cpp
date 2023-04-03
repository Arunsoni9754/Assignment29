#include<iostream>
using namespace std;
class dollar
{
    int d;
    public:
    dollar(){}

     void display()
    {
        cout<<"dollar is "<<d;
    }
    int getx()
    {
        return d;
    }
    dollar(rupee o)
    {
        d=o.gety();
    }
};
class rupee
{
    int r;
    public:
    rupee(){}
    void display()
    {
        cout<<"rupee is "<<r;
    }
    rupee(int x)
    {
        r=x;
    }
    int gety()
    {
        return r;
    }
    rupee(dollar p)
    {
        r=p.getx();
    }

};

int main()
{
    
rupee r = 23;
dollar d = r; // Rupee to Dollar conversion
d.display();
r.display();
r = d; // Dollar to Rupee Conversion
d.display();
r.display();
 return 0;
}