// read and compare names

#include "std_lib_facilities.h"

int main()
{
    cout<<"Please enter 2 names: \n";
    string name1;
    string name2;
    cin>>name1>>name2;
    if (name1==name2) cout<<"It is the same name? That is correct? \n";
    string full_name = name1 + ' ' + name2;
}