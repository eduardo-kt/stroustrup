// uma função que calcula o quadrado sem usar a multiplicação


#include "std_lib_facilities.h" //disponível em: https://www.stroustrup.com/Programming/std_lib_facilities.h

int no_multiply_square(int x) // Uma função que calcula o quadrado sem usar a multiplicação
    {
    int counter = 0;
    int square = 0;
    while (counter<x){
        square += x;
        ++counter;
        }
    return square;
}

int main(){
    int var = 0;
    cout<<"Escolhar um número inteiro: ";
    cin>>var;
    cout<<"O quadrado do número escolhido é :\t"<<no_multiply_square(var);
}