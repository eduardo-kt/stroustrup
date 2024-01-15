// a program to determine some statistics of two numbers

#include "std_lib_facilities.h"
#include <cstdlib>

int main()
{
    cout<<"Enter 2 numbers (use space to separate them, then press enter): \n";
    
    double val1;
    double val2;
    double larger;
    double smaller;

    cin>>val1>>val2;
    if (val1 < val2)
    {
        smaller = val1; larger = val2;
        }
    else
    {
        smaller = val2; larger = val1;
        };
    double soma = val1 + val2;
    double dif = abs(val1 - val2);
    double prod = val1 * val2;
    double quociente = static_cast<double>(larger) / smaller;
    
    cout<<"maior: "<<larger<<"\nmenor: "<<smaller<<"\nsoma: "<<soma<<"\ndiferença: "<<dif<<"\nproduto: "<<prod<<"\nratio: "<<quociente;
    }