#include <iostream>
#include <math.h>
using namespace std;


class Rectangle
{

private:
    float length,width;
public:
    void Area()
    {  cout<<"Area is"<<' ';
       cout<<length*width<<endl;
    }
    void Perimeter()
    {
        cout<<"Perimeter is"<<' ';
        cout<<2*(length+width)<<endl;
    }
    Rectangle():length(1),width(1)
    {

    }
    Rectangle (float a=1,float b):length(a),width(b)
    {

    }
    get()
    {
        cout<<"Length is :";
        cout<<length;
        cout<<"Width is :";
        cout<<width;
    }
    set()
    {
        if((length>=1.0&&width>=1.0)&&(length<20.0&&width<20.0))
           {
               cout<<"In Range"<<endl;
           }
            else
            {
                cout<<"Not in range"<<endl;
            }
    }
};

int main()
{
    //Rectangle r;
    Rectangle r(10.00,20.5);
    r.Area();
    r.Perimeter();
    //r.get();
    r.set();

}
