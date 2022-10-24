#include <iostream>
#include <map>
using namespace std;

int main(int argc, char const *argv[])
{
    map<char, int> mp ={
        {'t', 7},
        {'S', 5},
        {'a', 4}
    };

    for (map<char, int>::iterator itr = mp.begin(); itr != mp.end(); itr++){
        cout << (*itr).first << ": " << itr->second << endl;
        //(*itr).first = itr->first
    }

    return 0;
}
