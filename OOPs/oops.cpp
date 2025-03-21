#include<iostream>
#include<string>
using namespace std;


// Create class 
class Teacher{
    private:
        double salary;
    //Access Modifiers (By default class properties methods are private)
    public:
    //Constructor (Non-Parameterized)
        Teacher(){
            cout<<"Hello, I am constructor"<<endl;
            dept = "Computer Science";
        }

    //Constructor (Parameterized)
        Teacher(string n,string dpt, string subj, double sal){
            name = n;
            dept = dpt;
            subject = subj;
            salary = sal;
        }

    // @ Class properties or @ class attributes
        string name;
        string dept;
        string subject;
        


    // @ Class member functions OR methods


        void changeDept(string newDept){
            dept = newDept;
        }

        /*
       * Now Salary is private, we can't directly access salary outside of the class, 
       * to access indirectly outside of the class, we used getter and setter function.
       * These two functions comes under the public, so that it can access outside the class, using that we can now access the salary.
        */
        //Setter function
        void setSalary(double sal){
            salary = sal;
        }
        
        //Getter function
        double getInfo(){
            cout<<"Name : "<< name <<endl;
            cout<<"Department is : "<< dept <<endl;
        }

};

class Account{

    //Data Hidding or encapsulation
    private:
        string userName;
        string password;
        double balance;

    public:
        string accountHolderName;
        double accNumber;
        string branchName;

};


int main(){

    // * Constructor is called automatically during its object creation.
    Teacher t1("John Doe", "Computer Science", "DSA", 45000);  //create a object of class Teacher called t1. 

    // t1.name = "John Doe";
    // t1.subject = "OOPs";

    //access methods 
    //t1.changeDept("DSA");

    //t1.setSalary(34023);
    //cout<<t1.getSalary()<<endl;

    t1.getInfo();


    return 0;
}