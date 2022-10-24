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

    mp['u'] = 29;                         //una forma de incertarlo
    mp.insert(pair<char,int>('j', 9));   //la forma mas c++ de hacerlo

    cout << mp['j'] << endl;

    return 0;
}
