#include<iostream>
#include<string>
using namespace std;


/*  Constructor Overloading  */
class Student{
    public:
        string name;

        //Default constructor
        Student(){
            cout<<"Non-parameterized constructor...\n";
        }

        //Parameterized constructor
        Student(string name){
            cout<<"Parameterized constructor...\n";
            this->name = name;
        }
};


int main(){
    //Student s1(); //This time default constructor invoke
    Student s1("Tony stark"); //parameterized constructor invoke
    return 0;
}