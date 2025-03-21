#include<iostream>
#include<string>
using namespace std;


class Person {
    private:
    double AccNo = 342345678345;
    public:
        string name;
        int age;
    
    //Custom or Parameterized constructor
    Person(string name, int age){
        this->name = name;
        this->age = age;    
    }
};



class Student : public Person {
    public:
        int rollno;
    
        Student(string name, int age, int rollno) : Person(name, age){
            this->rollno = rollno;
        }

        void getInfo(){
            cout<<"Name : "<<name<<endl;
            cout<<"Age : " <<age<<endl;
            cout<<"rollno : "<<rollno<<endl;
        }
};


int main(){
    Student sObj("Miguel Diaz", 19, 2342);
    sObj.getInfo();
    return 0;
}