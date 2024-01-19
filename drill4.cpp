// drill page 159 ch 04

#include <iostream>
#include <sstream>
#include <string>
#include <limits>
#include <cmath>





int main() {
    double value, smallest = std::numeric_limits<double>::quiet_NaN(), largest;
    std::string chave;

    while (true) {
        std::cout<<"Enter a value: ";
        std::cin>> chave;
        if (chave == "|") {
            break;
        }

        std::stringstream(chave) >> value;

        if (std::isnan(smallest)){
            smallest = value;
            largest = value;

        }

        if (value < smallest) {
            smallest = value;

        }
        else if (value > largest) {
            largest = value;
        }

        std::cout<<"\nThe smallest so far: "<<smallest<<"\nThe largest so far: "<<largest<<"\n";
                
    }
}
    
