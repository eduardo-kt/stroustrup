//um código par criar um loop que vai de a 97 até z 122

#include "std_lib_facilities.h"

int main() {
    char letter = 'a';
    int numb = 97;
    while (numb<123) {
        cout<<letter<<"\t"<<numb<<"\n";
        ++numb;
        letter = char(letter+1);
    }

}
