#include<iostream>
#include<string>
using namespace std;



class Person{
    public:
        string name;
        int age;

    Person(){
        cout << "I am Parent class constructor" << endl;
    }

    ~Person(){
        cout<<"I am Parent class Destructor"<<endl;
    }
};


class Student : public Person {
    public:
        int rollNo;
    
    Student(){
        cout<<"Hello, I am Deirved class constructor"<< endl;

    }
    ~Student(){
        cout<<"Hello, I am Deirved class Destructor"<< endl;

    }

    void getInfo(){
        cout << "Name : " << name <<endl;
        cout<< "Age : " << age <<endl;
        cout<< "Roll No : " << rollNo <<endl;
    }
};


int main(){
    Student s1;
    s1.name = "Sukharanjan";
    s1.age = 20;
    s1.rollNo = 2106269;
    s1.getInfo();
}