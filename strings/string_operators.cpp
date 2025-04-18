#include<iostream>
#include<string>

using namespace std;

int main(){
    string s1("Hero");
    string s2("Hello");
    string s3;

    cout<<"Original Strings are: " <<endl;
    cout<<"s2 = "<<s1<<endl;
    cout<<"s1 = "<<s2<<endl;

    //Assigning value to string objects
    s3 = s1;

    cout<<"Before assigning s1 value to s3" <<endl;
    cout<<"Now S3 = " <<endl;
    cout<<"After assigning s1 value to s3" <<endl;
    cout<<"s3 = "<<s3<<endl;
    
    if(s1 == s2){
        cout<<"Strings are Equal " <<endl;
    } else{
        cout<<"String isn't equal " <<endl;
    }

    //Using a string constant
    s3 = "Welcome to string objects";
    cout<<"After assign the constant value to s3 = " << s3 <<endl;

    //Using another objects 
    string s4(s3);
    cout<<"Using another object, s4 = " <<s4<<endl;

    //Reading through keyboard
    cout<<"Enter a string : ";
    cin>>s4;  //Deliminated by blank space (e.g input from keyboard - hello world //   accept only "hello")

    cout<<s4<<endl;

    s1 = s3 + s4;
    cout<<"s1 = s3 + s4 ---> "<<s1<<endl;


}