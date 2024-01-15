// code to put 3 integers in ascending order

#include "std_lib_facilities.h"

int main()
{
    cout<<"Enter 3 numbers: ";
    // declarar
    string v1, v2, v3;
    
    // incluir
    cin>>v1>>v2>>v3;
    if (v1>v2){
        swap(v1,v2);
    }
    if (v1>v3){
        swap(v1,v3);
    }
    if (v2>v3){
        swap(v2,v3);
    }
    cout<<"\nos números em ordem são:"<<v1<<v2<<v3;

}