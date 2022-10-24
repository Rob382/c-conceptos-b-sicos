#include <iostream>
using namespace std;

int main(int argc, char const *argv[])
{
    int num1, num2;
    cout << "enter a number: ";
    cin >> num1;
    cin.clear();
    cin.ignore(1000, '\n');
    cout << "enter a 2nd number: ";
    cin >> num2;
    int sum = num1 + num2;
    int res = num1 - num2;
    int mul = num1 * num2;
    int div = num1 / num2;

    cout << "the sum is: " << sum << endl;
    cout << "the substraction is: " << sum << endl;
    cout << "the multiplication is: " << sum << endl;
    cout << "the divition is: " << sum << endl;

    return 0;
}
