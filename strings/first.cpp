#include<iostream>
#include<string>

/* String clas is a very large and includes many constructor and member functions and opeators*/
using namespace std;

// creating a string objects

int main(){
    string s1;    //Using constructor with no argument

    string s2("Hello");  // Using one argument constructor 

    cout<<"S1 = " << s1<<endl;
    cout<<"S2 = " << s2<<endl;

    
    string s4 = "      world";    //Space is also count in string 

    //Operators fro string objects (=, +, +=, ==, !=, < , <= , >, >=, []-> subscription)

    string s3 = s2 + s4;

    cout<<"S3 = " <<s3 <<endl;


    // Reading through keyboard (One word)
    string str_cin;
    string str_get_line;
    cout<<"Enter a string( One word)" << endl;
   // cin>>str_cin;

    //reading through keyboard a line of text
    cout<<"Enter line of text : " <<endl;
    getline(cin,str_get_line, '\n');  //Read embeded blancks also

    cout<<"Reading through keyboard - one word : " <<str_cin <<endl;
    cout<<"Reading through keyboard - Line of text with space : " <<str_get_line <<endl;  
    
}