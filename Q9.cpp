#include<iostream>
using namespace std;
class dollar
{
  int a;
  public:
  dollar()
  {

  }
  dollar(int y)
  {
    a=y;
  }
  void display()
  {
    cout<<"dollar is "<<a;
  }
};
int main()
{
int x = 50;
dollar d;
d = x;
d.display();
return 0;
}
