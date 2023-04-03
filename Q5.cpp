#include<iostream>
using namespace std;
class Invent1
{
    int x,y;
    public:
    Invent1(){}
    Invent1(int a,int b)
    {
        x=a;
        y=b;
    }
    void display()
    {
        cout<<x<<" "<<y;
    }
    operator float()
    {
        return x;
    }
     int getx()
    {return x;}
    int gety()
    {
        return y;
    }


};
class Invent2
{
    int a,b;
     public:
    Invent2(){}
    Invent2(Invent1 o)
    {
        a=o.getx();
        b=o.gety();
    }
    void display()
    {
        cout<<a<<" "<<b;
    }

};
int main()
{
    Invent1 s1(4,5);
    Invent2 d1;
 float tv;
 tv=s1;
 cout<<tv<<endl;
 d1=s1;
 d1.display();
 return 0;
}