#include<iostream>
#include<string>
using namespace std;

/* 
? We can modify string contents in severaln ways, using the member function such as insert(), replace(), erase(), append().
*/

int main(){
    string s1("98765");
    string s2("abcde");


    cout<<"Original string are : " <<endl;
    cout<<"s1 = " <<s1<<endl;
    cout<<"s2 = " <<s2<<endl;

    //Inserting string into another string
    //Insert method takes two arguments - first - position where you want to insert, -second- which string want to insert.
    //s1.insert(2,"hello");
    s1.insert(2,s2);
    cout<<" After inserting s2 into s1 at index 2 position : " <<endl;
    cout<<"Modified s1 is : " << s1<<endl;

    //Removing Characters in a string 
    s1.erase(2,4);
    cout<<"Remove 3 or 4 characters from s1 : " <<endl;
    cout<<s1<<endl;
}