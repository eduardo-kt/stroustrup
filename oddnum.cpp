// programa para verificar se o numero e par ou impar

#include "std_lib_facilities.h"

int main()

{
    int numb = 0;
    string qualifier;
    cout<<"Insira um número inteiro: \n";
    cin>>numb;

    if (numb % 2 == 0) {qualifier = "Odd";}
    else {qualifier = "Even";}

    cout<<"O valor "<<numb<<" é um valor "<<qualifier;

    

}