// simple program to exercise operators

#include "std_lib_facilities.h"

int main()
{
    cout<<"Enter a floating point: ";
    double n;
    cin>>n;
    cout<<"n==" <<n
    <<"\nn+1==" << n + 1
    << "\nthree times n ==" << n * 3
    << "\ntwice n==" << n+n
    << "\nsquared n==" << n*n
    << "\nsquareroot n ==" << sqrt(n)
    << '\n';

}