#include<iostream>
#include<string>
using namespace std;

class Person{
    public:
        string name;
        int age;
};

class Teacher : public Person{
    public:
        string subject;
};

class Student : public Person{
    public:
        int roll;
};


int main(){
    Teacher t1;
    t1.name = "Ben";
    t1.subject = "Medical";

    cout<<"Teacher Name : "<< t1.name <<endl;
    cout<<"Teacher Subject : " << t1.subject <<endl;

    Student s1;
    s1.name =  "Peeter";
    s1.roll = 231324;

    cout<<"Student Name : "<< s1.name <<endl;
    cout<<"Student roll : " << s1.roll <<endl;

}