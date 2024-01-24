//programa que faz operações de + - * / 

#include <iostream>

using namespace std;
double numb1, numb2;
char operation;
int main(){
    
    while (true){
        cout<<"SimpleCalculator\n\nDigite os números e a operação desejada.\nOperações válidas:\nsoma (+)\nsubtração (-)\ndivisão(/)\nmultiplicação (*): ";
        cin>>numb1>>numb2>>operation;
        if (operation == '-') {
            cout<<"The subtration of "<<numb1<<" and "<<numb2<<" is "<<numb1-numb2;
            break;        

        }
        else if (operation == '+') {
            cout<<"The sum of "<<numb1<<" and "<<numb2<<" is "<<numb1+numb2;
            break;

        }
        else if (operation == '/') {
            cout<<"The division of "<<numb1<<" and "<<numb2<<" is "<<numb1/numb2;       
            break; 

        }
        else if (operation == '*') {
            cout<<"The product of "<<numb1<<" and "<<numb2<<" is "<<numb1*numb2;  
            break;      

        }
        else {
            cout<<"Opção inválida. Tente novamente\n ";

        }

    }
}