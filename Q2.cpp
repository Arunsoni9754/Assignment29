#include<iostream>
using namespace std;
class complex
{
    int r,i;
    public:
    void setdata(int x,int y)
    {
        r=x;
        i=y;
    }
     operator int()
    {
        cout<<"Int claeed";
        return r;
    }
    // operator long()
    // {
    //     cout<<"longer callle";
    //     return r;
    // }
};
int main()
{
    complex c1;
    c1.setdata(3,4);
    int x;
    x=c1; //complex to int 
   // cout<<c1;//or cout<<x;
    return 0;
}