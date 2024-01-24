// um programa para adivinhar um número entre 0 e 100

#include <iostream>

using namespace std;

int main() {
    int guess = 50, high = 100, low = 0;
    char key;
    int counter = 0;

    cout<<"=========\n Eu sou o Guesser \nPense em um número de 0 a 100 que eu vou adivinhar qual é o número:\n";
    while (true){
        ++counter;
        cout<<"Meu palpite é "<<guess<<". O seu número é igual (digite 'i'), maior (digite 'm') ou menor (digite 'n') do que "<<guess<<" ?\n";
        cin>>key;
        if (key == 'i') {
            break;
        }
        else if (key == 'm') {
            low = guess;
            guess = (low + high)/2;
        }
        else if (key == 'n') {
            high = guess;
            guess = (low + high)/2;        
        }
        else {
            cout<<"Você digitou uma opção inválida.\n;";
        }                       
    }
        
    cout<<"Acertei o número em "<<counter<<" tentativas.\n";
    if (counter<=7){
        cout<<"É um acerto em uma quantidade aceitável de tentativas\n";
    }
    else {
        cout<<"É um acerto em uma quantidade inaceitável de tentativas\n";
    }
}
         


