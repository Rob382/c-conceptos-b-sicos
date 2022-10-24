#include <iostream>
#include <string>
#include <cstdlib>
using namespace std;

//declaración de clase padre con constructor fuera de la clase
class operaciones
{
private:
    /* data */
public:
    int x;
    int y;
    int res;

    void sumar(){
        res = x + y;
    }

    void restar(){
        res = x - y;
    }

    operaciones(int, int);
    
};

operaciones::operaciones(int d1, int d2)
{
    x = d1;
    y = d2;
}

//declaración de clase hija (herencia) con constructor declarado dentro de la clase
class mas_suma:public operaciones {
    public:
    int tercero;

    void sumar3(){
        res = x + y + tercero;
    }
    mas_suma(int d1, int d2, int d3):operaciones(d1, d2){
        tercero = d3;
    }
};

int main(int argc, char const *argv[])
{
    operaciones objeto1(30, 10);
    objeto1.sumar();
    cout << objeto1.res << endl;
    objeto1.restar();
    cout << objeto1.res << endl;

    operaciones objeto2(4, 6);
    objeto2.sumar();
    cout << objeto2.res << endl;
    objeto2.restar();
    cout << objeto2.res << endl;

    mas_suma objeto3(10, 20, 30);
    objeto3.sumar3();
    cout << objeto3.res << endl;
    objeto3.restar();
    cout << objeto3.res << endl;


    return 0;
}

