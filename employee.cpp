//ZOHRA AMNA        2022-SE-3

#include <iostream>
#include <string>
using namespace std;
class Employee    //employee class
{
    string name;
    double salary;
    int year;
    double bonous;
    public: 
    Employee()   //default constructor
    {
        name="";
        salary=0.0;
        year=0;
        bonous=0.0;
    }
    void setdata()  //setter function
    {
        cout<<"Enter the Name : ";
        getline(cin,name);
        cout<<"Enter the Salary : ";
        cin>>salary;
        cout<<"Enter the year : ";
        cin>>year;
    }
    void display()    //getter function
    {
        cout<<"======================================================\n";
        cout<<"         NAME            |     "<<name<<endl;
        cout<<"         SALARY          |     "<<salary<<endl;
        cout<<"         YEAR            |     "<<year<<endl;
        cout<<"         BONOUS          |     "<<bonous<<endl;
         cout<<"======================================================\n";
    }
    friend void calBonous(Employee&);
};
void calBonous(Employee &e)    //bonous calculating function
{
    if(e.year>=5)
    {
        e.bonous=(e.salary)/10;
    }
}
int main()     //here the body of main starts
{
    Employee e[3];
    for(int i=0;i<3;i++)
    {
          cout<<"                      EMPLOYEE "<<i+1<<endl;
        e[i].setdata();
        cin.ignore();
    }

     for(int i=0;i<3;i++)
    {
        calBonous(e[i]);
    }
     cout<<"======================================================\n";
         cout<<"|                     EMPLOYEES                      |"<<endl;
         cout<<"======================================================\n";
    for(int i=0;i<3;i++)
    {
        
         cout<<"                      EMPLOYEE "<<i+1<<endl;
        e[i].display();
    }
}