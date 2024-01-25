// um programa para jogar pedra papel e tesoura contra o computador

#include <iostream>
#include <vector>
#include <cstdlib>

using namespace std;

bool legalmoves(char move){
    vector <char> legalmoves = {'r','p','s'};
    for (char legalmove:legalmoves) {
        if (move == legalmove) {
            return true;
        }
    }
    return false;
}

char player(){
    char playermove;    
    while (true) {
        cout<<"Faça sua jogada (digite 'r' para pedra, 'p' para papel, ou 's' para tesoura)";
        cin>>playermove;
        if (legalmoves(playermove)) {
            return playermove;             
        }
        cout<<"\n\n**Jogada ilegal**\n\n";        
    }
}

char cpu(){
    
    vector <char> legalmoves = {'r','p','s'};
    int random = rand() % legalmoves.size();
    char cpumove = legalmoves[random];
    return cpumove;
}

string comparison(char cpumove, char playermove){
    string resultado;
    switch (playermove) {    
        case 'r':
            switch (cpumove) {
                
                case 'p':
                    resultado =  "Você perdeu\n";
                    break;
                    
                case 's':
                    resultado =  "Você ganhou\n";
                    break;
                default:
                    resultado = "Empatou\n";
                    break;
            }
            break;
        case 's':
            switch (cpumove) {
                
                case 'r':
                    resultado =  "Você perdeu\n";
                    break;
                    
                case 'p':
                    resultado =  "Você ganhou\n";
                    break;
                default:
                    resultado = "Empatou\n";
                    break;
                                    
            }
            break;
        case 'p':
            switch (cpumove) {
                
                case 's':
                    resultado =  "Você perdeu\n";
                    break;
                    
                case 'r':
                    resultado =  "Você ganhou\n";                                    
                    break;

                default:
                    resultado = "Empatou\n";
                    break;
            }
            break;              
    }    
    return resultado;
}

int main() {
    bool key = true;
    cout<<"Pedra - Papel - Tesoura\n============================\n\n";
    char continuegame, playerm, cpum;

    while (key) {     
        playerm = player();
        cpum = cpu();
        cout<<comparison(cpum,playerm);
        // loop para jogar novamente
        while (true) {
            cout<<"\nJogar novamente ('s' para sim, 'n' para não)? ";
            cin>>continuegame;
            if (continuegame == 'n') {
                key = false;
                break;
            }
            else if (continuegame == 's') {
                break;
            }
            else {
                cout<<"\n**Opção inválida**\n";
        }

        }
        
    }
    

}