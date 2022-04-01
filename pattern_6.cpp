#include <iostream>
using namespace std;

int main()
{
    int n;
    cin >> n;

    int i = 0;

    while (i < n)
    {
       int value = 1;
        // Pattern 1:
        int j = 0;
        while (j < n - i)
        {
            cout << value<<" ";
            j++;
            value++;
        }
        value = value - 1;
        // Pattern 2:
        int k = n;
        while (k > n - i)
        {
            cout << "* ";
            k--;
        }
        // Pattern 3:
        int l = 0;
        while (l < i)
        {
            cout << "* ";
            l++;
        }
        // Pattern 4:
        int m = 0;
        while (m < n - i)
        {
            cout << value<<" ";
            value--;
            m++;
        }
        cout << endl;
        i++;
    }

    return 0;
}
