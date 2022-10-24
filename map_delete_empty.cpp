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

    mp.clear();                             //borra todos
    cout << mp['t'] << endl;

    return 0;
}
