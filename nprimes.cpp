// programa para identificar n primeiros numeros primos

#include <iostream>
#include <vector>

using namespace std;

int main() {
    vector <int> primos = {2};
    int n = 0;
    int counter = 2;
    bool sentinel;

    cout<<"Identificador de números primos. Quantos números primos você quer? ";
    cin>>n;

    while (primos.size() < n) {
        cout<<"\n";
        sentinel = true;
        for (int primo:primos) {
            if (counter % primo == 0) {
                sentinel = false;
            }
        }
        if (sentinel == true) {
            primos.push_back(counter);
            //++n;
        }
        ++counter;
        for (int item: primos) {
            cout<<item<<"\t";

        }    
    }

}

