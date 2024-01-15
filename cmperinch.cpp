// um conversor de centimetros e polegadas

#include "std_lib_facilities.h"

int main(){
    constexpr double cm_inch = 2.54;

    double len = 1;
    char unit = 'a';

    cout<<"digite uma len seguida de c ou i: ";
    cin>>len>>unit;
    switch (unit)
    {
    case 'i'/* constant-expression */:
        cout<<len<<"in=="<<cm_inch*len<<"com\n";
        break;
    
    default:
        cout<<"Errou!";
        break;
    }
    
}

