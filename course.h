//Marwan Ahmed Ebrahim
//20180267
#ifndef COURSE_H
#define COURSE_H
#include<string>
using namespace std;

class course
{
    string courseName,courseCode;
    char courseGrade;
    float coursePoint;
    int courseYear,courseSemester;
    public:
    course(){}
        //function operator overloading to get input of course
        friend istream &operator>>(istream &input,course &c)
        {
            cout<<"Enter Course Name: ";
            input>>c.courseName;
            cout<<"Enter Course Code: ";
            input>>c.courseCode;
            cout<<"Enter Course Grade: ";
            input>>c.courseGrade;
            cout<<"Enter Course point: ";
            input>>c.coursePoint;
            cout<<"Enter Course year: ";
            input>>c.courseYear;
            cout<<"Enter Course Semester: ";
            input>>c.courseSemester;
            return input;
        }
        //function operator overloading to get output of course
        friend ostream &operator<<(ostream &output, const course &c)
        {
            output<<"Course Name: "<<c.courseName<<endl;
            output<<"Course Code: "<<c.courseCode<<endl;
            output<<"Course Grade:"<<c.courseGrade<<endl;
            output<<"Course point:"<<c.coursePoint<<endl;
            output<<"Course year:"<<c.courseYear<<endl;
            output<<"Course Semester:"<<c.courseSemester<<endl;
            return output;
        }

};


#endif // COURSE_H
