#include<iostream>
using namespace std;
class rupee
{
    int r;
    public:
    rupee()
    {
        
    }
    rupee(int x)
    {
        r=x;
    }
     operator int()
    {
        cout<<"Int claeed";
        return r;
    }
    
};
int main()
{
 rupee r=10;
 int x=r;
cout<<x;
 return 0;
}