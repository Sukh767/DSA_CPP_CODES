#include<iostream>
#include<string>
using namespace std;


class Student{
    private:
        double regNo;
    
    public:
        string name;
        int roll;
        string subject;
        string department;
        float *cgpaPtr;
    

        // ? `this` is a special pointer in c++ that points to the current object.
        //Parameterized constructor
        Student(string name, int roll, string subject, string department, float cgpa){
            this->name = name;
            this->roll = roll;
            this->subject = subject;
            this->department = department;

            // Allocating memeory Dynamically
            cgpaPtr = new float;
            *cgpaPtr = cgpa;
        }

        //Custom copy constructor......(pass by reference)
        Student(Student &orgObj){
            cout<<"I am a custom Copy Constructor \n";
            this->name = orgObj.name;
            this->roll = orgObj.roll;
            this->subject = orgObj.subject;
            this->department = orgObj.department;
            /* Shallow copy constructor
?           this->cgpaPtr = orgObj.cgpaPtr;
            */

           // Deep Copy Constructor
           cgpaPtr = new float;
           *cgpaPtr = *orgObj.cgpaPtr;
        }

        void getInfo(){
            cout<<"Name : "<< name <<endl;
            cout<<"Roll : "<< roll <<endl;
            cout<<"subject : "<< subject <<endl;
            cout<< "department : "<< department <<endl;
            cout<< "CGPA : "<< *cgpaPtr <<endl;
        }
};



int main(){
    Student s1("Larry Page", 6, "OOPS", "Computer Science", 7.66);
    s1.getInfo();
    Student s2(s1); //(Default) Custom Copy constructor invoke..
    //Now if we want to change the cgpa for s2 object, because of shallow copy constructor, 
    // the s1 object cgpa will also change. because both two ptr point to the same addrs.
    s2.name = "Tom jerry";
    *(s2.cgpaPtr) = 9.2;
    s2.getInfo();


}