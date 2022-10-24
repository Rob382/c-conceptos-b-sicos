#include <iostream>
using namespace std;

int main(int argc, char const *argv[])
{
    int x = 2;
    int *y = &x;

    cout << "reference to x: " << &x << endl;
    cout << "valor directo de puntero y: " << y << endl;
    cout << "valor al que apunta y: " << *y << endl;

    return 0;
}
