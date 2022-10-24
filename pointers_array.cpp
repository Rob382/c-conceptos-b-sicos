#include <iostream>
using namespace std;

int main(int argc, char const *argv[])
{
    int x[] = {3, 4, 5};
    int *head = x;   //es lo mismo que &x[0] un array ya es una dirección de memoria del primer elemento

    for (int i = 0; i < (sizeof(x)/sizeof(x[0])); ++i){
        head = x + i;
        cout << head << endl;
        cout << *head << endl;
    }
    return 0;
}
