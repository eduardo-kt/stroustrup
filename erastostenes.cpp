// implementação do crivo de erastostones para identificação de numeros primos

#include <iostream>
#include <vector>
#include <cmath>
#include <algorithm>

using namespace std;

int main() {
    int maxval; 
    vector <int> numbvector; 
    
    
    
    // Escolher valor
    cout<<"Escolha um número: ";
    cin>>maxval;

    // Preencher vetor até valor máximo
    for (int i=2; i<=maxval;++i){
        numbvector.push_back(i);
    }

    // maior valor a verificar
    int lastverify = static_cast<int>(sqrt(maxval));

    for (int candidate: numbvector) {
        for (int numb: numbvector) {
            if (candidate > lastverify) {
                break;
            }
            else if (numb == candidate) {
                continue;
            }
            else if (numb % candidate == 0) {
                numbvector.erase(remove(numbvector.begin(), numbvector.end(), numb), numbvector.end());
            }
        }
    }
    /*
    for (int q=0; q<numbvector.size();++q) {
        for (int w = 0; w< numbvector.size();++w) {
            if (numbvector[w] % numbvector[q] == 0){
                numbvector.erase(remove(numbvector.begin(), numbvector.end(), numbvector[w]), numbvector.end());
            }
        }        
    }*/

    for (int item:numbvector){
        cout<<item<<"\t";
    }     
}
