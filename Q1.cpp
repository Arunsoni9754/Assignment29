#include<iostream>
using namespace std;
class complex
{
    int r,i;
    public:
    void display()
    {
        cout<<r<<"+("<<i<<"j)";
    }
    complex(int x)
    {
        r=x;
        i=x;
    }
    operator int()
    {
        return r;
    }
};
int main()
{
    complex c=5;
    c.display();
}