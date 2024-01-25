// um programa que dobra de valor a cada iteração dentro de 64 iterações (exercicio 8 página 129)

#include <iostream>
#include <vector>

using namespace std;

int main() {
    int counter = 0;
    vector <int> chess;
    int chessval = 1;

    while (counter < 64) {
        chess.push_back(chessval);
        chessval *= 2;
        cout<<chess.back()<<"\t\t";
        if (chess.at(chess.size()-1)>=1000000000 && chess.at(chess.size()-2)<1000000000) {
            cout<<"Alcança 1000000000 em "<<counter<<" iterações.\n";
            counter = 64;
        }
        else if (chess.at(chess.size()-1)>=1000000 && chess.at(chess.size()-2)<1000000) {
            cout<<"Alcança 1000000 em "<<counter<<" iterações.\n";
        }
        else if (chess.at(chess.size()-1)>=1000 && chess.at(chess.size()-2)<1000) {
            cout<<"Alcança 1000 em "<<counter<<" iterações.\n";
        }
        else {cout<<"\n";}
        ++counter;






    }

}