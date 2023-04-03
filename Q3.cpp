#include<iostream>
using namespace std;
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
};
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
    item(product p)
    {
        i=p.getx();
    }
};
int main()
{
    item i1;
    product p1;
    p1.setdata(3,4);
    i1=p1;
    p1.display();
    cout<<endl;
    i1.display();
    return 0;
}