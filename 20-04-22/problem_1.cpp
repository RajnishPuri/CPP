#include <iostream>
using namespace std;

int main()
{
    int a = 10, b = 10, c;
    c = a++ + b;
    cout << a << " " << b << " " << c << endl;
    int i = 11;
    i = i++ + ++i;
    cout << i << endl;

    i=1;
    cout << i++ + ++i << endl;
    i=1;
    cout << i++ + i++ << endl;
    i=1;
    cout << ++i + i++ << endl;
    i=1;
    cout << ++i + ++i << endl;

    return 0;
}
