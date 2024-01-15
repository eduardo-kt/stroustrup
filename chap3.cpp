// read name and age

#include "std_lib_facilities.h"

int main()
{
    cout<<"Please enter your first name and age(followed by 'enter'):\n";
    string first_name = "????";   //first_name is a variable of type string
    int age = 0;
    
    cin>>first_name;    //read characters into first_name
    cin>>age;           // posso incluir as duas leituras em 1 linha cin>>first_name>>age
    cout<< "Hello, " <<first_name<<"age "<<age<<"!\n";
}