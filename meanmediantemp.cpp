// read some temperatures into a vector

# include "std_lib_facilities.h"

int main(){
    vector <double> temps;              // temperatures
    for (double temp; cin>> temp;)      // read into temp
        temps.push_back(temp);          //put temp into vector
                                   
    double sum = 0;
    for (double x: temps) sum +=x;
    cout<< "Average temperature: " << sum/temps[temps.size()]<<'\n';

    sort(temps);
    cout<<"Median temperature: "<< temps[temps.size()/2]<<'\n';
}