//ZOHRA AMNA        2022-SE-3
#include<iostream>
#include<string>
using namespace std;
class Car    //car class
{
 string model;
 string brand;
 int year;
 public:
 Car()   
 {
    model="";
    brand="";
    year=0;
 }
 //insertion or extraction operator over load
 friend void operator<<(ostream&,Car&);
 friend void operator>>(istream&,Car&);
 //member functions
 friend void displayCar(Car);
  bool operator==(Car);
  bool operator>(Car);
  bool operator<(Car);
   bool operator>=(Car);
  bool operator<=(Car);
   bool operator!=(Car);
   //non member functions
  friend  void equality(Car c1,Car c2);
 friend void greaterop(Car c1,Car c2);
  friend void lessop(Car c1,Car c2);
   friend void greaterThanEqual(Car c1,Car c2);
  friend void lessThanEqual(Car c1,Car c2);
   friend void notEqual (Car c1,Car c2);
};
//insertion or extraction operator over load
void operator<<(ostream&output,Car &obj)
{
    output<<"=========================================\n";
    output<<"       MODEL      |     "<<obj.model<<endl;
    output<<"       BRAND      |     "<<obj.brand<<endl;
    output<<"       YEAR       |     "<<obj.year<<endl;
    output<<"==========================================\n";
}
void operator>>(istream&input,Car&obj)
{
    cout<<"Enter the Model of car : ";
    getline(input,obj.model);
     cout<<"Enter the Brand of car : ";
    getline(input,obj.brand);
    cout<<"Enter the Year of car : ";
    input>>obj.year;
}
//member function
void displayCar(Car obj)
{
     cout<<"=========================================\n";
     cout<<"       MODEL      |     "<<obj.model<<endl;
    cout<<"       BRAND      |     "<<obj.brand<<endl;
     cout<<"       YEAR       |     "<<obj.year<<endl;
     cout<<"==========================================\n";
}
bool Car:: operator==(Car c2)
{
    if((brand==c2.brand)&&(model==c2.model))
    {
        return true;
    }
    else{return false;}
}
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
bool Car::operator<(Car c)
{
    if(year<c.year)
    {
        return true;
    }
    else{
        return false;
    }
}
bool Car::operator>=(Car c)
{
    if(year>=c.year)
    {
        return true;
    }
    else{
        return false;
    }
}
bool Car::operator<=(Car c)
{
    if(year<=c.year)
    {
        return true;
    }
    else{
        return false;
    }
}
 bool Car:: operator!=(Car c2)
 {
    if((brand==c2.brand)&&(model==c2.model))
    {
        return true;
    }
    else{return false;}

 }
//non member function operator over load
 void equality(Car c1,Car c2)
 {
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
 }
void greaterop(Car c1,Car c2)
{
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
}
void lessop(Car c1,Car c2)
{
cout<<"                                  FINDING CAR 1 IS OLDEST OR NOT                                  \n";
      if(c1<c2)
     {
        cout<<"=======================================================\n";
        cout<<"               CAR 1 IS OLDEST                         \n";
        cout<<"=======================================================\n";
     }
     else{
         cout<<"=======================================================\n";
        cout<<"                  CAR 1 IS NOT OLDEST                   \n";
        cout<<"=======================================================\n";
     }
}
 void greaterThanEqual(Car c1,Car c2)
 {
     cout<<"                                  FINDING CAR 1 IS >= OPERATOR OVERLOAD                                  \n";
      if(c1>=c2)
     {
        cout<<"=======================================================\n";
        cout<<"         CAR 1 IS GREATER THAN OR EQUAL TO CAR 2                         \n";
        cout<<"=======================================================\n";
     }
     else{
         cout<<"=======================================================\n";
        cout<<"         CAR 1 IS NOT GREATER THAN EQUAL TO CAR 2                   \n";
        cout<<"=======================================================\n";
     }
 }
 void lessThanEqual(Car c1,Car c2)
 {
     cout<<"                                  FINDING CAR 1 IS <= OPERATOR OVERLOAD                                  \n";
      if(c1<=c2)
     {
        cout<<"=======================================================\n";
        cout<<"          CAR 1 IS LESS THAN OR EQUAL TO CAR 2                         \n";
        cout<<"=======================================================\n";
     }
     else{
         cout<<"=======================================================\n";
        cout<<"         CAR 1 IS NOT LESS THAN OR EQUAL TO CAR 2                   \n";
        cout<<"=======================================================\n";
     }
 }
 void notEqual (Car c1,Car c2)
 {
      cout<<"                                  COMPAING NOT EQUALITY                                  \n";
     if(c1!=c2)
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
 }
//here body of main starts
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

      cout<<"                                  COMPAING NOT EQUALITY                                  \n";
     if(c1!=c2)
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
      cout<<"                                  FINDING CAR 1 IS OLDEST OR NOT                                  \n";
      if(c1<c2)
     {
        cout<<"=======================================================\n";
        cout<<"               CAR 1 IS OLDEST                         \n";
        cout<<"=======================================================\n";
     }
     else{
         cout<<"=======================================================\n";
        cout<<"                  CAR 1 IS NOT OLDEST                   \n";
        cout<<"=======================================================\n";
     }

      cout<<"                                  FINDING CAR 1 IS >= OPERATOR OVERLOAD                                  \n";
      if(c1>=c2)
     {
        cout<<"=======================================================\n";
        cout<<"         CAR 1 IS GREATER THAN OR EQUAL TO CAR 2                         \n";
        cout<<"=======================================================\n";
     }
     else{
         cout<<"=======================================================\n";
        cout<<"         CAR 1 IS NOT GREATER THAN EQUAL TO CAR 2                   \n";
        cout<<"=======================================================\n";
     }
      cout<<"                                  FINDING CAR 1 IS <= OPERATOR OVERLOAD                                  \n";
      if(c1<=c2)
     {
        cout<<"=======================================================\n";
        cout<<"          CAR 1 IS LESS THAN OR EQUAL TO CAR 2                         \n";
        cout<<"=======================================================\n";
     }
     else{
         cout<<"=======================================================\n";
        cout<<"         CAR 1 IS NOT LESS THAN OR EQUAL TO CAR 2                   \n";
        cout<<"=======================================================\n";
     }
      cout<<"                                  DISPLAYING CAR 1 USING DISPLAY CAR FUNCTION                                  \n";
     displayCar(c1);
      cout<<"                                  DISPLAYING CAR 2 USING << OPERATOR OVERLOAD                                  \n";
     cout<<c2;
     cout<<"                                  DISPLAYING OVERLOAD NON MEMBER FUNCTIONS FUNCTION                                  \n";
     equality(c1,c2);
     notEqual(c1,c2);
     greaterThanEqual(c1,c2);
     lessThanEqual(c1,c2);
     lessop(c1,c2);
     greaterop(c1,c2);
     

}