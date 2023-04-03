#include<iostream>
using namespace std;
class Time
{
    int h,min;
    public:
    Time(){}
    Time(int a,int b)
    {
        h=a;
        min=b;   
    }
    void display()
    {
        cout<<"Hrs= "<<h<<" mins= "<<min<<endl;
    }
     int getx()
    {return h;}
    int gety()
    {
        return min;
    }

};
class Minute
{
    int m;
    public:
    Minute()
    {

    }
    Minute(Time o)
    {
        m=o.gety();
    }
    void display()
    {
        cout<<" mins= "<<m<<endl;
    }

};
int main()
{
 Time t1(2,30);
 t1.display();
 Minute m1;
 m1.display();
 m1=t1; // Fetch minute from time
 t1.display();
 m1.display();
 return 0;
}
