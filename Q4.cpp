#include<iostream>
using namespace std;
class item
{
    int i;
    public:
    void display()
    {
        cout<<"Item i="<<i;
    }
    item()
    {

    }
    item (int x)
    {
        i=x;
    }

    
};
class product
{
    int x,y;
    public:
    void setdata(int a,int b)
    {
        x=a;
        y=b;
    }
    void display()
    {
        cout<<x<<" "<<y;
    }
    int getx()
    {return x;}
    int gety()
    {
        return y;
    }
    operator item()
    {item i(x);
        return i;
    }
};


int main()
{
  
    product p1;
    p1.setdata(3,2);
  item i1=p1;
    p1.display();
    cout<<endl;
    i1.display();
    return 0;
}