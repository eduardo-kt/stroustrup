// drill page 159 ch 04

#include <iostream>
#include <sstream>
#include <string>

using namespace std;
    
int main(){
   string key;
   double temp, smallest, largest;
   int counter = 0;
   string unit;

   while (true) {
    cout<<"Enter a number followed by its unit(valid: cm, in, ft, m) \n\t(digit '|' to exit): ";
    cin>>key;
    if (key == "|") {
        break;
    }
    istringstream iss(key);
    iss >> temp;
    getline(iss >> ws, unit);

    if (unit == "m"){
        temp = temp * 100;
        cout<<"Converting meters (m) to centimeters (cm)\n";
        if (counter == 0) {  
        smallest = temp;        
        ++counter;
        }
        else if (counter == 1){    
            if (temp<smallest) {
                largest = smallest;
                smallest = temp;
                ++counter;
                cout<<"The smallest number so far: "<< smallest<<'\n';
                cout<<"The largest number so far: "<< largest<<'\n';
            }
            else if (temp>smallest) {
                largest = temp;
                ++counter;
                cout<<"The smallest number so far: "<< smallest<<'\n';
                cout<<"The largest number so far: "<< largest<<'\n';            
            }
            else {
                largest = smallest;
                ++counter;
                cout<<"The smallest number so far: "<< smallest<<'\n';
                cout<<"The largest number so far: "<< largest<<'\n';
            }
            }
        else {
            if (temp<smallest) {
                smallest = temp;
                cout<<"The smallest number so far: "<< smallest<<'\n';
                cout<<"The largest number so far: "<< largest<<'\n';
                ++counter;
            }
            else if (temp>largest) {
                largest = temp;
                cout<<"The smallest number so far: "<< smallest<<'\n';
                cout<<"The largest number so far: "<< largest<<'\n';
                ++counter;
            }
            else {
                cout<<"The smallest number so far: "<< smallest<<'\n';
                cout<<"The largest number so far: "<< largest<<'\n';
                ++counter;
        }
        }

    }
    else if (unit == "in") {
        temp = 2.54 * temp;
        cout<<"Converting inches (in) to centimeters (cm)\n";
        if (counter == 0) {  
        smallest = temp;        
        ++counter;
        }
        else if (counter == 1){    
            if (temp<smallest) {
                largest = smallest;
                smallest = temp;
                ++counter;
                cout<<"The smallest number so far: "<< smallest<<'\n';
                cout<<"The largest number so far: "<< largest<<'\n';
            }
            else if (temp>smallest) {
                largest = temp;
                ++counter;
                cout<<"The smallest number so far: "<< smallest<<'\n';
                cout<<"The largest number so far: "<< largest<<'\n';            
            }
            else {
                largest = smallest;
                ++counter;
                cout<<"The smallest number so far: "<< smallest<<'\n';
                cout<<"The largest number so far: "<< largest<<'\n';
            }
            }
        else {
            if (temp<smallest) {
                smallest = temp;
                cout<<"The smallest number so far: "<< smallest<<'\n';
                cout<<"The largest number so far: "<< largest<<'\n';
                ++counter;
            }
            else if (temp>largest) {
                largest = temp;
                cout<<"The smallest number so far: "<< smallest<<'\n';
                cout<<"The largest number so far: "<< largest<<'\n';
                ++counter;
            }
            else {
                cout<<"The smallest number so far: "<< smallest<<'\n';
                cout<<"The largest number so far: "<< largest<<'\n';
                ++counter;
        }
        }
        
    }
    else if (unit == "ft") {
        temp = 12 * 2.54 * temp;
        cout<<"Converting feet (ft) to centimeters (cm)\n";
        if (counter == 0) {  
        smallest = temp;        
        ++counter;
        }
        else if (counter == 1){    
            if (temp<smallest) {
                largest = smallest;
                smallest = temp;
                ++counter;
                cout<<"The smallest number so far: "<< smallest<<'\n';
                cout<<"The largest number so far: "<< largest<<'\n';
            }
            else if (temp>smallest) {
                largest = temp;
                ++counter;
                cout<<"The smallest number so far: "<< smallest<<'\n';
                cout<<"The largest number so far: "<< largest<<'\n';            
            }
            else {
                largest = smallest;
                ++counter;
                cout<<"The smallest number so far: "<< smallest<<'\n';
                cout<<"The largest number so far: "<< largest<<'\n';
            }
            }
        else {
            if (temp<smallest) {
                smallest = temp;
                cout<<"The smallest number so far: "<< smallest<<'\n';
                cout<<"The largest number so far: "<< largest<<'\n';
                ++counter;
            }
            else if (temp>largest) {
                largest = temp;
                cout<<"The smallest number so far: "<< smallest<<'\n';
                cout<<"The largest number so far: "<< largest<<'\n';
                ++counter;
            }
            else {
                cout<<"The smallest number so far: "<< smallest<<'\n';
                cout<<"The largest number so far: "<< largest<<'\n';
                ++counter;
        }
        }       

    }
    else {
        if (counter == 0) {  
        smallest = temp;        
        ++counter;
        }
        else if (counter == 1){    
            if (temp<smallest) {
                largest = smallest;
                smallest = temp;
                ++counter;
                cout<<"The smallest number so far: "<< smallest<<'\n';
                cout<<"The largest number so far: "<< largest<<'\n';
            }
            else if (temp>smallest) {
                largest = temp;
                ++counter;
                cout<<"The smallest number so far: "<< smallest<<'\n';
                cout<<"The largest number so far: "<< largest<<'\n';            
            }
            else {
                largest = smallest;
                ++counter;
                cout<<"The smallest number so far: "<< smallest<<'\n';
                cout<<"The largest number so far: "<< largest<<'\n';
            }
            }
        else {
            if (temp<smallest) {
                smallest = temp;
                cout<<"The smallest number so far: "<< smallest<<'\n';
                cout<<"The largest number so far: "<< largest<<'\n';
                ++counter;
            }
            else if (temp>largest) {
                largest = temp;
                cout<<"The smallest number so far: "<< smallest<<'\n';
                cout<<"The largest number so far: "<< largest<<'\n';
                ++counter;
            }
            else {
                cout<<"The smallest number so far: "<< smallest<<'\n';
                cout<<"The largest number so far: "<< largest<<'\n';
                ++counter;
        }
        };
    }
   }
}