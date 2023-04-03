#include<iostream>
using namespace std;
class Time
{ int h,m;
    public:
    Time()
    {}
    void display()
    {
        cout<<"The time is "<<h<<"hrs "<<m<<"mis";
    }
    Time(int d)
    {
        h=d/3600;
        m=d/60;
    }
};
int main()
{
int duration;
 cout<<"Enter time duration in seconds";
 cin>>duration;
 Time t1 = duration;
 t1.display();
 return 0;
}