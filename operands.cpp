// uma função que aplica uma operação entre dois valores

#include "std_lib_facilities.h"

int main()
{
    // o usuário registra uma operação e duas variáveis
    
    
    string operation;
    double operand_1, operand_2;

    cout<<"Entre a operação e as variáveis: \n";

    cin>>operation>>operand_1>>operand_2;

    // use if para determinar o tipo dos operandos

    if (operation == "+") {cout<<operand_1 + operand_2;}
    else if (operation == "*") {cout<<operand_1 * operand_2;}
    else {cout<<"Não fui programado para esta operação";}


}