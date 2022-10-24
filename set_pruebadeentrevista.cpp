//checar si las letras de un string están en el otro string
#include <iostream>
#include <set>
using namespace std;

int main(int argc, char const *argv[])
{
    string test = "this is a test iii jjj  jdfsajj aaaa";
    string find = "hello";
    set<char> find_letters;

    for(int i = 0; i < find.length(); ++i){
        char letter = find[i];
        find_letters.insert(letter);
    }

    for(int i = 0; i< test.length(); i++){
        char letter = test[i];
        find_letters.erase(letter);
    }

    if(find_letters.size() > 0){
        cout << "no están todas las letras" << endl;
    }
    else{
        cout << "si están todas las letras" << endl;
    }
    return 0;
}
