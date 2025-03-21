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

        //Destructor 
        // ?@ System automatically delete the static allocate memory
       // ?@ To delete the Dynamically allocating memory we need to use `delete`.
        ~Student(){
            cout<<"Hello, I delete everything, I am Destructor" << endl;
            delete cgpaPtr;  //Delete Dynamically allocating memory
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
}