#include <iostream>
using namespace std;

int main()
{
    int a = 0;
    int b = 0;
    cout << "Enter the first number: ";
    cin >> a;

    cout << "Enter the second number: ";
    cin >> b;

    cout << boolalpha;
    ((a % 2 != 0) != (b % 2 != 0)) ? cout << true : cout << false;
    return 0;
}
