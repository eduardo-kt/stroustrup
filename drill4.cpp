// drill page 159 ch 04

#include <iostream>
#include <sstream>
#include <string>


// adicionar while loop com regra de saída


int main() {
    double value1, value2; // change values from int to double
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

        // value comparison
        if (value1 > value2){
            std::cout<<"the smaller value is: "<<value2<<"\nthe larger value is: "<<value1;
            if (value1/value2 <= 1.01) {         // relative comparison
                std::cout<<"\nBut they are almost the same\n";
            }            
        }
        else if (value1 < value2) {
            std::cout<<"the smaller value is: "<<value1<<"\nthe larger value is: "<<value2;
            if (value2/value1 <= 1.01) {         // relative comparison
                std::cout<<"\nBut they are almost the same\n";
            }            
        }        
       
        else {std::cout<<"The values have equal value";}
        
    }
}
    
