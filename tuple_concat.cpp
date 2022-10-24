#include <iostream>
#include <tuple>
using namespace std;

int main(int argc, char const *argv[])
{
    tuple <int, char> t1 = make_tuple(1, 't');
    tuple <char, string> t2 = make_tuple('r', "hello");
    auto t3 = tuple_cat(t1, t2);
    cout << get<0>(t3) << endl;
    cout << get<1>(t3) << endl;
    cout << get<2>(t3) << endl;
    cout << get<3>(t3) << endl;

    return 0;
}
