#include <iostream>
using namespace std;

int main()
{
    int num;
    cout << "Enter the Index position for which you want the Fibonacci Value : ";
    cin >> num;

    int a = 0, b = 1, sum = 0;

    int i = 1;
    while (i < num)
    {
        b=a+b;
        a=b-a;        
        i++;
    }

    cout << "Fibonacci Value of Index " << num << " is " << a << endl;

    return 0;
}