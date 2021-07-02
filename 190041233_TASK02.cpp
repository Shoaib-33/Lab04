#include <iostream>
#include <math.h>
using namespace std;

class Flight
{
    int Flight_Number;
    string Destination;
    float Distance;
    float Fuel;
    float Max_Fuel;
    void Calfuel();
public:
    void Feedinfo();
    void Showinfo();
};
void Flight::Calfuel()
{
    if (Distance<1000)
        Fuel=500;
    else if (Distance<2000)
        Fuel=1100;
    else
        Fuel=2200;
        if(Fuel<=Max_Fuel)
        {
            cout<<"Fit"<<endl;
        }
        else
        {
            cout<<"Unfit"<<endl;
        }
}
void Flight::Feedinfo()
{
    cout<<"Flight No :";
    cin>>Flight_Number;
    cout<<"Destination :";
    cin>>Destination;
    //cout<<endl;
    cout<<"Distance :";
    cin>>Distance;
    cout<<"Fuel:";
    cin>>Max_Fuel;
    Calfuel();
}
void Flight::Showinfo()
{
    cout<<"Flight No :"
        <<Flight_Number<<endl;
    cout<<"Destination :"
        <<Destination<<endl;
    cout<<"Distance :"
        <<Distance<<endl;;
    cout<<"Fuel:"
        <<Fuel<<endl;;
}



int main()
{
  Flight x;
  x.Feedinfo();
  x.Showinfo();
  x.Feedinfo();

}


