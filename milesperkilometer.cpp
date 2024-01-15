// a program to convert miles to kilometers

#include "std_lib_facilities.h"

int main()
{
    cout<<"Enter miles: ";
    double miles = 0.0;
    cin>>miles;
    double km = miles * 1.609;
    cout<<miles<<" miles is "<<km<<" kilometers";
}