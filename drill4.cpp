// drill page 159 ch 04

#include <iostream>
#include <sstream>
#include <string>

// adicionar while loop com regra de saída


int main() {
    int value1, value2;
    std::string chave;
    while (true) {
        std::cout<<"Enter the first value: ";
        std::cin>> chave;
        if (chave == "|") {
            break;
        }
        std::stringstream(chave) >> value1;
        std::cout<<"\nEnter the second value: ";
        std::cin>> chave;
        if (chave == "|") {
            break;
        }
        std::stringstream(chave) >> value2;
        std::cout<<"\nValues: " << value1 << "\tand\t" << value2 << "\n";
    }
}
    
