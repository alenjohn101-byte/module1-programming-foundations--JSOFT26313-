#include <iostream>
using namespace std;

int main()
{
    string name;
    int age;
    double marks;

    cout<<"Name :"; cin>>name;
    cout<<"Age :"; cin>>age;
    cout<<"Marks :"; cin>>marks;

    cout<<"\n---STUDENT PROFILE---"<<endl;
    cout<<"Name :"<<name<<endl;
    cout<<"Percentage :"<<marks/5.0<<"%";

    return 0;
}
