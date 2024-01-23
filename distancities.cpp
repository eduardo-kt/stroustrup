// calculo da distancia entre duas cidades (exercicio 3 pag 161)

#include <iostream>
#include <vector>
#include <numeric>
#include <algorithm>

using namespace std;


int main() {
    vector <double> distances;

    cout<<"Entre as distâncias entre os pontos de parada:\n";

    for (double temp; cin>>temp;) {
        distances.push_back(temp);
    }
    cout<<"\nA distância total da rota é: "<< accumulate(distances.begin(), distances.end(), 0.0)<<"Km\n";

    cout<<"Resumo das distâncias:\n"<<"========================\n";

    auto smallest = max_element(distances.begin(),distances.end());
    auto biggest = min_element(distances.begin(),distances.end());


    cout<<"Valor mínimo: "<<*smallest<<"\n";
    cout<<"Valor máximo: "<<*biggest<<"\n";

}