#include <iostream>
using namespace std;

int main()
{
    int num;
    cout << "Enter the number for checking whether it is Prime or Not : ";
    cin >> num;

    int i = 2, count = 1;
    while (i < num)
    {
        if (num % 2 == 0)
        {
            cout << "No, This Number is Not Prime" << endl;
            count = 0;
            break;
        }
        i++;
    }

    if (count == 1)
    {
        cout << "Yes, This Number is Prime" << endl;
    }

    return 0;
}
