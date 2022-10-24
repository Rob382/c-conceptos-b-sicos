#include <iostream>
#include <set>
using namespace std;

int main(int argc, char const *argv[])
{
    set<char> s1 = {'C','D','C','D','A'};
    s1.insert('B');

    if(s1.find('C') == s1.end()){
        cout << "could not find C" << endl;
    }
    else{
        cout << "found C!" << endl;
    }

    for(auto itr = s1.begin(); itr != s1.end(); ++itr){
        cout << *itr << endl;
    }

    return 0;
}
