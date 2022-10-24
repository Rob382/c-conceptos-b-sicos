#include <iostream>
#include <map>
using namespace std;

int main(int argc, char const *argv[])
{
    string test = "Hello world my name is not tim xdxdxdxdxdx";

    map<char, int> freq;

    for (int i = 0; i < test.length(); ++i){
        char letter = test[i];

        if (freq.find(letter) == freq.end()){
            freq[letter] = 0;
        }
        freq[letter]++;
    }

    for (auto itr = freq.begin(); itr != freq.end(); ++itr){

        if (itr->first == ' '){
        cout << "SPACE" << ": " << itr->second << endl;

        }
        else{
        cout << itr->first << ": " << itr->second << endl;

        }

    }

    return 0;
}
