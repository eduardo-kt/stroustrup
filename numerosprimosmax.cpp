// uma função para encontrar numeros primos entre 1 e 100

#include <iostream>
#include <vector>

using namespace std;

int main(){
    vector <int> primus = {2};
    int maxval;
    bool sentinel = true;
    
    cout<<"Enter a value: ";
    cin>>maxval;

    for (int i=3; i<=maxval;++i){
        sentinel = true;
        for (int j:primus){
            if (i%j == 0){
                sentinel = false;
            }
        }
        if (sentinel == true) {
            primus.push_back(i);
        }
    }
    for (int j:primus){
        cout<<j<<"\t";
    }             
}

