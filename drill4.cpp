// drill page 159 ch 04

#include <iostream>
#include <sstream>
#include <string>
#include <vector>
#include <algorithm>

using namespace std;
    
int main(){
   string key;
   double temp, smallest, largest, soma = 0;
   vector <double> allvals;
   int counter = 0;
   string unit;

   while (true) {
    std::cout<<"Enter a number followed by its unit(valid: cm, in, ft, m) \n\t(digit '|' to exit): ";
    cin>>key;
    if (key == "|") {
        std::cout<<"The smallest: "<<smallest<<"cm\nThe largest: "<<largest<<"cm\n";
        sort(allvals.begin(),allvals.end());
        for (double val: allvals) {
            std::cout<<val<<"\n";
        }
        std::cout<<"The total: "<<soma<<"m\n";
        break;
    }
    istringstream iss(key);
    iss >> temp;
    getline(iss >> ws, unit);
    

    if (unit == "m"){
        temp = temp * 100.0;
        soma += temp/100.0;
        allvals.push_back(temp);
        std::cout<<"Converting meters (m) to centimeters (cm)\n";
        if (counter == 0) {  
        smallest = temp;        
        ++counter;
        }
        else if (counter == 1){    
            if (temp<smallest) {
                largest = smallest;
                smallest = temp;
                ++counter;
                std::cout<<"The smallest number so far: "<< smallest<<'\n';
                std::cout<<"The largest number so far: "<< largest<<'\n';
            }
            else if (temp>smallest) {
                largest = temp;
                ++counter;
                std::cout<<"The smallest number so far: "<< smallest<<'\n';
                std::cout<<"The largest number so far: "<< largest<<'\n';            
            }
            else {
                largest = smallest;
                ++counter;
                std::cout<<"The smallest number so far: "<< smallest<<'\n';
                std::cout<<"The largest number so far: "<< largest<<'\n';
            }
            }
        else {
            if (temp<smallest) {
                smallest = temp;
                std::cout<<"The smallest number so far: "<< smallest<<'\n';
                std::cout<<"The largest number so far: "<< largest<<'\n';
                ++counter;
            }
            else if (temp>largest) {
                largest = temp;
                std::cout<<"The smallest number so far: "<< smallest<<'\n';
                std::cout<<"The largest number so far: "<< largest<<'\n';
                ++counter;
            }
            else {
                std::cout<<"The smallest number so far: "<< smallest<<'\n';
                std::cout<<"The largest number so far: "<< largest<<'\n';
                ++counter;
        }
        }

    }
    else if (unit == "in") {
        temp = 2.54 * temp;
        soma += temp/100.0;
        allvals.push_back(temp);
        std::cout<<"Converting inches (in) to centimeters (cm)\n";
        if (counter == 0) {  
        smallest = temp;        
        ++counter;
        }
        else if (counter == 1){    
            if (temp<smallest) {
                largest = smallest;
                smallest = temp;
                ++counter;
                std::cout<<"The smallest number so far: "<< smallest<<'\n';
                std::cout<<"The largest number so far: "<< largest<<'\n';
            }
            else if (temp>smallest) {
                largest = temp;
                ++counter;
                std::cout<<"The smallest number so far: "<< smallest<<'\n';
                std::cout<<"The largest number so far: "<< largest<<'\n';            
            }
            else {
                largest = smallest;
                ++counter;
                std::cout<<"The smallest number so far: "<< smallest<<'\n';
                std::cout<<"The largest number so far: "<< largest<<'\n';
            }
            }
        else {
            if (temp<smallest) {
                smallest = temp;
                std::cout<<"The smallest number so far: "<< smallest<<'\n';
                std::cout<<"The largest number so far: "<< largest<<'\n';
                ++counter;
            }
            else if (temp>largest) {
                largest = temp;
                std::cout<<"The smallest number so far: "<< smallest<<'\n';
                std::cout<<"The largest number so far: "<< largest<<'\n';
                ++counter;
            }
            else {
                std::cout<<"The smallest number so far: "<< smallest<<'\n';
                std::cout<<"The largest number so far: "<< largest<<'\n';
                ++counter;
        }
        }
        
    }
    else if (unit == "ft") {
        temp = 12 * 2.54 * temp;
        soma += temp/100.00;
        allvals.push_back(temp);
        std::cout<<"Converting feet (ft) to centimeters (cm)\n";
        if (counter == 0) {  
        smallest = temp;        
        ++counter;
        }
        else if (counter == 1){    
            if (temp<smallest) {
                largest = smallest;
                smallest = temp;
                ++counter;
                std::cout<<"The smallest number so far: "<< smallest<<'\n';
                std::cout<<"The largest number so far: "<< largest<<'\n';
            }
            else if (temp>smallest) {
                largest = temp;
                ++counter;
                std::cout<<"The smallest number so far: "<< smallest<<'\n';
                std::cout<<"The largest number so far: "<< largest<<'\n';            
            }
            else {
                largest = smallest;
                ++counter;
                std::cout<<"The smallest number so far: "<< smallest<<'\n';
                std::cout<<"The largest number so far: "<< largest<<'\n';
            }
            }
        else {
            if (temp<smallest) {
                smallest = temp;
                std::cout<<"The smallest number so far: "<< smallest<<'\n';
                std::cout<<"The largest number so far: "<< largest<<'\n';
                ++counter;
            }
            else if (temp>largest) {
                largest = temp;
                std::cout<<"The smallest number so far: "<< smallest<<'\n';
                std::cout<<"The largest number so far: "<< largest<<'\n';
                ++counter;
            }
            else {
                std::cout<<"The smallest number so far: "<< smallest<<'\n';
                std::cout<<"The largest number so far: "<< largest<<'\n';
                ++counter;
        }
        }       

    }
    else if (unit == "cm") {
        if (counter == 0) {  
        smallest = temp;  
        soma += temp/100.00; 
        allvals.push_back(temp);     
        ++counter;
        }
        else if (counter == 1){    
            if (temp<smallest) {
                largest = smallest;
                smallest = temp;
                ++counter;
                std::cout<<"The smallest number so far: "<< smallest<<'\n';
                std::cout<<"The largest number so far: "<< largest<<'\n';
            }
            else if (temp>smallest) {
                largest = temp;
                ++counter;
                std::cout<<"The smallest number so far: "<< smallest<<'\n';
                std::cout<<"The largest number so far: "<< largest<<'\n';            
            }
            else {
                largest = smallest;
                ++counter;
                std::cout<<"The smallest number so far: "<< smallest<<'\n';
                std::cout<<"The largest number so far: "<< largest<<'\n';
            }
            }
        else {
            if (temp<smallest) {
                smallest = temp;
                std::cout<<"The smallest number so far: "<< smallest<<'\n';
                std::cout<<"The largest number so far: "<< largest<<'\n';
                ++counter;
            }
            else if (temp>largest) {
                largest = temp;
                std::cout<<"The smallest number so far: "<< smallest<<'\n';
                std::cout<<"The largest number so far: "<< largest<<'\n';
                ++counter;
            }
            else {
                std::cout<<"The smallest number so far: "<< smallest<<'\n';
                std::cout<<"The largest number so far: "<< largest<<'\n';
                ++counter;
        }
        };
    
    }
    else {
        std::cout<<"Invalid Unit. Please use cm, m, ft, or in. \n ";
    }
   } 
   
}