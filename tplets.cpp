#include <iostream>
#include <tuple>
using namespace std;

int main(int argc, char const *argv[])
{
    tuple <int, string> person(20, "tim");
    cout << get<1>(person) << endl;
    get<1>(person) = "billy";
    cout << get<1>(person) << endl;
    return 0;
}
