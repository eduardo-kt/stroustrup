// try this page 158: BLEEP banned words

#include "std_lib_facilities.h"

int main(){
    // list of words
    vector <string> words;
    cout<<"Sensor de alimentos. Insira os alimentos que serão inspecionados: \n";
    for (string temp; cin>>temp;)
        words.push_back(temp);
        
    sort(words);

    // clean vector
    vector <string> clean_vector;

    // verify list of words. drop banned words
    for (string word: words) 
        if (word == "aveia") {
            clean_vector.push_back("BLEEP");
        }
        else if (word == "lentilha") {
            clean_vector.push_back("BLEEP");
        }
        else if (word == "arroz") {
            clean_vector.push_back("BLEEP");
        } 
        else {
            clean_vector.push_back(word);
        }
    cout<<"\nNotas do sensor:\n";
    for (int i = 0; clean_vector.size(); ++i) {
        cout<<clean_vector[i]<<"\n";
    }
    
}
