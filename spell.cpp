// um programa que traduz número em texto (1,2,3,4) para número em caractere

#include "std_lib_facilities.h"

int main()
{
    string number;

    cout<<"Enter a number between 1-4 in text: \n";
    cin>>number;
    if (number == "one"){cout<<1;}
    else if (number == "two"){cout<<2;}
    else if (number == "three"){cout<<3;}
    else if (number == "four"){cout<<4;}
    else {cout<<"Stupid computer";}

}