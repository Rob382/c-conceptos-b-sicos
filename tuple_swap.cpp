#include <iostream>
#include <tuple>
using namespace std;

int main(int argc, char const *argv[])
{
    tuple <int, int> t1 = make_tuple(1, 2);
    tuple <int, int> t2 = make_tuple(3, 4);
    t1.swap(t2);
    cout << "de t1: " << get<0>(t1) << endl;
    cout << "de t1: " << get<1>(t1) << endl;
    cout << "de t2: " << get<0>(t2) << endl;
    cout << "de t2: " << get<1>(t2) << endl;

    return 0;
}
