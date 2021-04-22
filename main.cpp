//Marwan Ahmed Ebrahim
//20180267
#include <iostream>
#include<cstring>
#include"fcivector.h"
#include"student.h"
using namespace std;

void display()//display is function to display the operations
{
    cout<<"What kind of operation would you like to perform? "<<endl;
    cout<<"------------------------------------------------- "<<endl;
    cout<<"1. Add element.\n2. Remove last element.\n3. Insert element at certain position.\n4. Erase element from a certain position.\n5. Clear."<<endl;
    cout<<"6. Display first element.\n7. Display last element.\n8. Display element at certain position.\n9. Display vector size.\n10. Display vector capacity.\n11. Is empty?"<<endl;
}
template<class t>
bool fint(FCIvector<t> &v) //fint is function to do the operation for any data type
{
    while (true){
    display();
    int choose;
    int pos;
    cin>>choose;
    if(choose==1){//its to add element

        try
        {
           cout<<"How many elements you would like to add? "<<endl;
            int n;
            cin>>n;
            cout<<"Enter elements:  ";
            for(int i=0;i<n;i++){
                t elm;
                cin>>elm;
                v.AddE(elm);}
            }
        catch(int x)
        {
            if(x==1){
                cout<<"error"<<endl;
        }
        }
        again:
        cout<<"Would you like to perform other operations? (Y/N)"<<endl;
        char dec;
        cin>>dec;
        if(dec=='n'||dec=='N'){
            return true;
            break;}
        else if (dec=='y'||dec=='Y')
            continue;
        else{
            cout<<"you must enter Y  or N"<<endl;
            goto again;
        }
    }
    if(choose==2){//to remove last element
        try
        {
            v.removelast();

        }
        catch(int x)
        {
            if(x==2){
            cout<<"the vector is already empty you must do operation\n"<<endl;
        }
        }


       // else
         //   v.removelast();
        cout<<"Would you like to perform other operations? (Y/N)"<<endl;
        char dec;
        cin>>dec;
        if(dec=='n'||dec=='N'){
            return true;
            break;}
        else if (dec=='y'||dec=='Y')
            continue;
        else{
            cout<<"you must enter Y  or N"<<endl;
            goto again;
        }
        }
    if(choose==3){//to insert element at any position
        t elm;
        cout<<"enter the element you want to add :  ";
        cin>>elm;
        cout<<"enter the position :  ";
        cin>>pos;
        v.insertp(elm,v.Begin()+(pos-1));
        cout<<"the element you have added has been inserted"<<endl;
        cout<<"Would you like to perform other operations? (Y/N)"<<endl;
        char dec;
        cin>>dec;
        if(dec=='n'||dec=='N'){
            return true;
            break;}
        else if (dec=='y'||dec=='Y')
            continue;
        else{
            cout<<"you must enter Y  or N"<<endl;
            goto again;
        }
        }
    if(choose==4){//to erase element from any position
        cout<<"enter the position :  ";
        cin>>pos;
        v.eraseP(v.Begin()+(pos-1));
        cout<<"the element has been erased"<<endl;
        cout<<"Would you like to perform other operations? (Y/N)"<<endl;
        char dec;
        cin>>dec;
        if(dec=='n'||dec=='N'){
            return true;
            break;}
        else if (dec=='y'||dec=='Y')
            continue;
        else{
            cout<<"you must enter Y  or N"<<endl;
            goto again;
        }
        }
    if(choose==5){//to clear the vector
        v.clear();
        cout<<"the vector has been cleared"<<endl;
        cout<<"Would you like to perform other operations? (Y/N)"<<endl;
        char dec;
        cin>>dec;
        if(dec=='n'||dec=='N'){
            return true;
            break;}
        else if (dec=='y'||dec=='Y')
            continue;
        else{
            cout<<"you must enter Y  or N"<<endl;
            goto again;
        }
        }
    if(choose==6){//to display first element
        cout<<"First element in the vector is :  ";
        cout<<v.Displayfirst()<<endl;
        cout<<"Would you like to perform other operations? (Y/N)"<<endl;
        char dec;
        cin>>dec;
        if(dec=='n'||dec=='N'){
            return true;
            break;}
        else if (dec=='y'||dec=='Y')
            continue;
        else{
            cout<<"you must enter Y  or N"<<endl;
            goto again;
        }
        }
    if(choose==7){//to display last element
         cout<<"last element in the vector is :  ";
        cout<<v.Displylast()<<endl;
        cout<<"Would you like to perform other operations? (Y/N)"<<endl;
        char dec;
        cin>>dec;
        if(dec=='n'||dec=='N'){
            return true;
            break;}
        else if (dec=='y'||dec=='Y')
            continue;
        else{
            cout<<"you must enter Y  or N"<<endl;
            goto again;
        }
        }
    if(choose==8){//to display any element at any position
        cout<<"enter the position :  ";
        cin>>pos;
        cout<<"the element in position "<<pos<<"is :  ";
        cout<<v[pos-1]<<endl;
        cout<<"Would you like to perform other operations? (Y/N)"<<endl;
        char dec;
        cin>>dec;
        if(dec=='n'||dec=='N'){
            return true;
            break;}
        else if (dec=='y'||dec=='Y')
            continue;
        else{
            cout<<"you must enter Y  or N"<<endl;
            goto again;
        }
        }
    if(choose==9){//to Display vector size
        cout<<"Vector size is : ";
        cout<<v.DisplaySize()<<endl;
        cout<<"Would you like to perform other operations? (Y/N)"<<endl;
        char dec;
        cin>>dec;
        if(dec=='n'||dec=='N'){
            return true;
            break;}
        else if (dec=='y'||dec=='Y')
            continue;
        else{
            cout<<"you must enter Y  or N"<<endl;
            goto again;
        }
        }
    if(choose==10){//to Display vector capacity
        cout<<"Vector capacity is : ";
        cout<<v.DisplayCapacity()<<endl;
        cout<<"Would you like to perform other operations? (Y/N)"<<endl;
        char dec;
        cin>>dec;
        if(dec=='n'||dec=='N'){
            return true;
            break;}
        else if (dec=='y'||dec=='Y')
            continue;
        else{
            cout<<"you must enter Y  or N"<<endl;
            goto again;
        }
        }
    if(choose==11){//to check the vector is empty or not
        if(v.IsEmpty())
            cout<<"the vector is empty"<<endl;
        else
            cout<<"the vector is not empty"<<endl;
        cout<<"Would you like to perform other operations? (Y/N)"<<endl;
        char dec;
        cin>>dec;
        if(dec=='n'||dec=='N'){
            return true;
            break;}
        else if (dec=='y'||dec=='Y')
            continue;
        else{
            cout<<"you must enter Y  or N"<<endl;
            goto again;
        }
    }
    }
}



void start ()//start is a function to start the program and take choose of operations
{
    start:
    cout<<"         welcome to the program      "<<endl;
    cout<<"         ----------------------"<<endl;
    cout<<"Insert type of vector you would like to create: "<<endl;
    cout<<"1. list of integer\n2. list of character\n3. list of string\n4. list of float\n5. list of students\n6. Exit"<<endl;
    int choose;
    cin>>choose;
    switch(choose)
    {
    case 1:
        {
        cout<<"A vector of integers is created successfully.\n\n"<<endl;
        FCIvector<int> v;
        if(fint(v))//if function return true it will do that
            goto start;
        }
    case 2:
        {
        cout<<"A vector of characters is created successfully.\n\n"<<endl;
        FCIvector<char> v;
        fint(v);
        if(fint(v))
            goto start;
        }
    case 3:
        {
        cout<<"A vector of strings is created successfully.\n\n"<<endl;
        FCIvector<string> v;
        fint(v);
        if(fint(v))
            goto start;
        }
    case 4:
        {
        cout<<"A vector of floats is created successfully.\n\n"<<endl;
        FCIvector<float> v;
        fint(v);
        if(fint(v))
            goto start;
        }
    case 5:
        {
        cout<<"A vector of students is created successfully.\n\n "<<endl;
        FCIvector<student> v;
        fint(v);
        if(fint(v))
            goto start;
        }
    case 6:
        break;
    }
}
int main()
{
    start();

    return 0;
}
