#include <iostream>
#include <vector>
using namespace std;

int main(int argc, char const *argv[])
{
    vector<int> v1 = {1, 2, 3, 4};
    v1.push_back(454);
    v1.push_back(5);
    v1.push_back(5);
    v1.push_back(56);
    v1.push_back(12);

    cout << "antes de pop" << endl;
    cout << "capacidad " << v1.capacity() << endl;
    cout << "tamaño " << v1.size() << endl;
    cout << v1.front() << endl;  
    cout << v1.back() << endl;

    v1.pop_back();
    v1.pop_back();
    v1.pop_back();
    v1.pop_back();

    cout << "después de pop" << endl;
    cout << "capacidad " << v1.capacity() << endl;  
    cout << "tamaño " << v1.size() << endl;
    cout << v1.front() << endl;  
    cout << v1.back() << endl;

    //no va a cambiar la capacidad a menos que usemos shrink
    v1.shrink_to_fit();
    cout << "capacidad " << v1.capacity() << endl;
    cout << "tamaño " << v1.size() << endl;
    cout << v1.front() << endl;  
    cout << v1.back() << endl;

    //insertar datos
    v1.insert(v1.begin() + 1, 89);       //en index 1
    cout << "después de insertar:" << endl << v1[1] << endl;

    //borrar datos
    v1.erase(v1.begin() + 1);       //en index 1
    cout << "después de borrar:" << endl << v1[1] << endl;
    return 0;
}
