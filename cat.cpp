// try this page 72

#include "std_lib_facilities.h"

int main()
{
    cout<<"say something and I will verify repeated words: ";
    string previous = " ";
    string current;
    while (cin>>current){
        if (previous == current)
            cout<<"repeated word: " << current << '\n';
        previous = current;
    }
}