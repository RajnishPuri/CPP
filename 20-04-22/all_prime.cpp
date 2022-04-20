#include <iostream>
using namespace std;

int main()
{
    int num;

    cout << "Enter the number for getting all Prime Number B/T 0 to that Number : ";
    cin >> num;

    while (num >= 2)
    {
        int i = 2, count = 1;
        while (i < num)
        {
            if (num % i == 0)
            {
                cout << "No, " << num << " is Not Prime Number" << endl;
                count = 0;
                break;
            }
            i++;
        }
        if (count == 1)
        {
            cout << num << " is Prime Number" << endl;
        }
        num--;
    }

    return 0;
}
