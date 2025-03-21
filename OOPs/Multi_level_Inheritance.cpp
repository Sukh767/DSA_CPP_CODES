#include<iostream>
#include<string>
using namespace std;

/*
  Multi-level Inheritance
*/

class Person{
    public:
        string name;
        int age;
};

class Student : public Person {
    public: 
        int roll;
    
};


class GradStudent : public Student{
    public:
        string researchPaper;

    void getInfo(){
        cout<<"Student Name : "<<name<<endl;
        cout<<"Studnet Roll Number : "<<roll<<endl;
        cout<<"Student research paper : "<<researchPaper<<endl;
    }
};


int main(){
    GradStudent s1;
    s1.name = "Peeter Parker";
    s1.roll = 01;
    s1.researchPaper = "Quantum physics";

    s1.getInfo();
    return 0;
}