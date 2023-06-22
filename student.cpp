//ZOHRA AMNA        2022-SE-3
#include <iostream>
#include <string>
using namespace std;
class Student  //student class
{
    string name;
    string roll;
    double marks;
    double percentage;

public:
    Student()  //default constructor
    {
        name = "";
        roll = "";
        marks = 0;
    }
    void SetValues()   //setter function
    {
        cout << "Enter the name : ";
        getline(cin, name);
        cout << "Enter the roll : ";
        getline(cin, roll);
        cout << "Enter the marks : ";
        cin >> marks;
    }
    double getMarks()   //getter function
    {
        return marks;
    }
    
    friend double Percentage(Student,int);    //calculating percentage as friend function
    void setPercentage(double per)     //setting vvalue of percentage to member 
    {
        percentage = per;
    }
    void display()       //print funstion
    {
        cout << "==========================================================\n";
        cout << "       NAME                |        " << name << endl;
        cout << "       ROLL                |        " << roll << endl;
        cout << "       MARKS               |        " << marks << endl;
        cout << "       PERCENTAGE          |        " << percentage << endl;
        cout << "==========================================================\n";
    }
};
//definition of percentage function
double Percentage(Student obj,double totalMarks)
{
    double per;
   
    
    per=(obj.getMarks()/totalMarks)*100;
    return per;
}
//here the body of main starts
int main()
{
    Student s1,s2,s3;
    double totalMarks;
    cout<<"--------------------ENTER THE DATA OF STUDENT 1------------------------------------\n";
    s1.SetValues();
    cin.ignore();
     cout<<"--------------------ENTER THE DATA OF STUDENT 1------------------------------------\n";
    s2.SetValues();
    cin.ignore();
     cout<<"--------------------ENTER THE DATA OF STUDENT 1------------------------------------\n";
    s3.SetValues();
     cout<<"------------------------- ENTER THE TOTAL MARKS ------------------------------------\n";
     cout<<"Enter the total marks : ";
     cin>>totalMarks;
    s1.setPercentage(Percentage(s1,totalMarks));
    s1.display();
    s2.setPercentage(Percentage(s2,totalMarks));
    s2.display();
    s3.setPercentage(Percentage(s3,totalMarks));
    s3.display();

}