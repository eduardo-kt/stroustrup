// uma função para encontrar a mediana

#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
    vector <double> meanvec;
    
    cout<<"Enter number list: ";
    for (double temp; cin >> temp;) {
        meanvec.push_back(temp);
    }

    sort(meanvec.begin(), meanvec.end());    

    if (meanvec.size() % 2 == 0) {
        double lowmedian = meanvec[meanvec.size()/2 -1];
        double highmedian = meanvec[meanvec.size()/2];
        double medianval = (lowmedian + highmedian)/2;

        cout<<"Median: "<< medianval; 

    } 
    else {
        cout<<"Median: "<< meanvec[meanvec.size()/2];
    }
}