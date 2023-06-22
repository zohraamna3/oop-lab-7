//ZOHRA AMNA        2022-SE-3

#include <iostream>
#include <string>
using namespace std;
class Car   //car class
{
 string model;
 string brand;
 int year;
 public:
 Car()    //default constructor
 {
    model="";
    brand="";
    year=0;
 }
 //stream insertion or extraction operator overload as friend functions
 friend void operator<<(ostream&,Car&);
 friend void operator>>(istream&,Car&);
 friend void displayCar(Car);
 //overload equal to and greater than operator
  bool operator==(Car);
  bool operator>(Car);
};
//definition of functions
void operator<<(ostream&output,Car &obj)
{
    output<<"=========================================\n";
    output<<"       MODEL      |     "<<obj.model<<endl;
    output<<"       BRAND      |     "<<obj.brand<<endl;
    output<<"       YEAR       |     "<<obj.year<<endl;
    output<<"==========================================\n";
}
//stream extraction operator overload
void operator>>(istream&input,Car&obj)
{
    cout<<"Enter the Model of car : ";
    getline(input,obj.model);
     cout<<"Enter the Brand of car : ";
    getline(input,obj.brand);
    cout<<"Enter the Year of car : ";
    input>>obj.year;
}
//getter functions
void displayCar(Car obj)
{
     cout<<"=========================================\n";
     cout<<"       MODEL      |     "<<obj.model<<endl;
    cout<<"       BRAND      |     "<<obj.brand<<endl;
     cout<<"       YEAR       |     "<<obj.year<<endl;
     cout<<"==========================================\n";
}
//equality operator overload as member function
bool Car:: operator==(Car c2)
{
    if((brand==c2.brand)&&(model==c2.model))
    {
        return true;
    }
    else{return false;}
}
//greater than operator overload
bool Car::operator>(Car c)
{
    if(year>c.year)
    {
        return true;
    }
    else{
        return false;
    }
}
//here the body of main starts
int main()
{
    Car c1,c2;
    cout<<"------------------------CAR 1--------------------------------\n";
    cin>>c1;
    cout<<"------------------------CAR 2--------------------------------\n";
    cin.ignore();
    cin>>c2;
     cout<<"                                  COMPAING EQUALITY                                  \n";
     if(c1==c2)
     {
        cout<<"=======================================================\n";
        cout<<"                  Both are equal                        \n";
        cout<<"=======================================================\n";
     }
     else{
         cout<<"=======================================================\n";
        cout<<"                  Both are not equal                        \n";
        cout<<"=======================================================\n";
     }
     cout<<"                                  FINDING CAR 1 IS LATEST OR NOT                                  \n";
      if(c1>c2)
     {
        cout<<"=======================================================\n";
        cout<<"               CAR 1 IS LATEST                         \n";
        cout<<"=======================================================\n";
     }
     else{
         cout<<"=======================================================\n";
        cout<<"                  CAR 1 IS NOT LATEST                   \n";
        cout<<"=======================================================\n";
     }
      cout<<"                                  DISPLAYING CAR 1 USING DISPLAY CAR FUNCTION                                  \n";
     displayCar(c1);
      cout<<"                                  DISPLAYING CAR 2 USING << OPERATOR OVERLOAD                                  \n";
     cout<<c2;
}