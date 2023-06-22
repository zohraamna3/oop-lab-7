//ZOHRA AMNA        2022-SE-3

#include <iostream>
#include <string>
using namespace std;
class Circle     //circle class
{
double radius;
double area;
public:
Circle()     //default constructor
{
    radius=0.0;
    area=0.0;
}
void setArea(double area)       //setter function
{
this->area=area;
}

//friend functions
friend double Area(Circle);
friend void operator<<(ostream&,Circle&);
friend void operator>>(istream&,Circle&);
};
//definition of friend functions
 void operator<<(ostream&output,Circle &obj)
 {
    output<<"=====================================\n ";
    output<<"    radius       |      "<<obj.radius<<endl;
    output<<"     Area         |      "<<obj.area<<endl;
     output<<"=====================================\n ";

 }
 //stream extraction operator
 void operator>>(istream&input,Circle &obj)
 {
    cout<<"enter the radius of circle : ";
    input>>obj.radius;
 }
 //area function as a friend to the circle class
 double Area(Circle obj)
 {
    double area;
    area=3.1416*obj.radius*obj.radius;
    return area;
 }
 //here the body of main starts
 int main()
 {
    Circle c;
    cin>>c;
    c.setArea(Area(c));
    cout<<c;
    
 }