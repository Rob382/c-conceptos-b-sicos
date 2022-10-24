#include <iostream>
#include <vector>
using namespace std;

int main(int argc, char const *argv[])
{
    vector<int> v1 = {1, 2, 3, 4};

    //forma tradicopnal
    for(int i = 0; i < v1.size(); ++i){
        cout << v1[i] << endl;
    }

    //forma defisil
    for(auto itr = v1.begin(); itr != v1.end(); ++itr){
        cout << *itr << endl;
    }
    return 0;
}
