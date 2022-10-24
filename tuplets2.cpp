#include <iostream>
#include <tuple>
using namespace std;

int main(int argc, char const *argv[])
{
    tuple <int, char, bool, float> thing;
    thing = make_tuple(23, 'h', true, 23.4);
    cout << get<0>(thing) <<endl;
    cout << get<1>(thing) <<endl;
    cout << get<2>(thing) <<endl;
    cout << get<3>(thing) <<endl;
    return 0;
}
