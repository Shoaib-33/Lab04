#include <iostream>
#include <math.h>
using namespace std;
class Calculator
{
    double A;
public:
    Calculator():A(0) {}
    double add(int x)
    {
        A+=x;
    }
    double subtract(int x)
    {
        A-=x;
    }
    double multiply(int x)
    {
        return A * x;
    }
    double divideby(int x)
    {
        if (x == 0)
        {
            cout<<"Error : divide by 0 is undefined."<<endl;
        }
        else
        {
            A=A/x;
        }
    }
    void setvalue(int x)
    {
        A=x;
    }
   void clear()
   {
       A=0;
   }
   void Display()
   {   cout<<"Calculator Display"<<' ';
       cout<<A<<endl;
   }
   ~Calculator()
   {
    cout<<"Calculator object is destroyed"<<endl;
   }
};
int main()
{
    int choice;
    Calculator cal;
    cal.add(10);
    cal.Display();

}
