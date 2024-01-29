// implementação de função moda

#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
    vector <int> vetor_teste = {1,2,3,10,12,15,20,30,110,2,10,20,110,30,30,110,30,30,99,99,99,99,99,99,99,99};
    
    int maior_contagem = 0, maior_valor = 0;
    vector <int> set = vetor_teste;

    for (int item: set) {
        int contagem = count(vetor_teste.begin(), vetor_teste.end(), item);
        if (maior_contagem < contagem) {
            maior_contagem = contagem;
            maior_valor = item;
        }    
    }
    cout<<"Número modal: "<<maior_valor<<"\nContagem do numero modal: "<<maior_contagem;
}
