//Marwan Ahmed Ebrahim
//20180267
#ifndef STUDENT_H
#define STUDENT_H
#include<string>
#include<iostream>
#include"fcivector.h"
#include"course.h"
using namespace std;

class student
{
    private:
    string name,department;
    int id;
    //call the vector and connect it with the course client
    FCIvector<course>courses;
public:
    student()
    {
        name=" ";
        department=" ";
        id=0;
    }
    //function operator overloading to get input of student
    friend istream &operator>>(istream &input,student &s)
        {
            cout<<"Enter Student name:";
            input>>s.name;
            cout<<"Enter Student ID:";
            input>>s.id;
            cout<<"Enter Student Department: ";
            input>>s.department;
            int num;
            cout<<"Enter Number of Courses:";
            cin>>num;
            cout<<"\n";
            course c;
            for(int i=0;i<num;i++){
                cout<<"\nEnter course elements #"<<i+1<<"info :"<<endl;
                cin>>c;
                s.courses.AddE(c);
            }
            return input;
        }
        //function operator overloading to get output of student
        friend ostream &operator<<(ostream &output,student &s)
        {
            output<<"Student name:"<<s.name<<endl;
            output<<"Student ID: "<<s.id<<endl;
            output<<"Student Department:"<<s.department<<endl;
            for(int i=0;i<s.courses.DisplaySize();i++){
                output<<"courses "<<i+1<<" :"<<endl;
                output<<s.courses[i]<<endl;
            }
            return output;
        }

};


#endif
