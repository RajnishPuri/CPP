#include <iostream>
using namespace std;

int main()
{
    int n;
    cin >> n;

    int i = 0;

    while (i < n)
    {
        int space = 0;
        while (space < n - i - 1)
        {
            cout << " ";
            space++;
        }
        int value = 1;
        int j = n;
        while (j > n - i - 1)
        {
            cout << value;
            value++;
            j--;
        }
        value=value-2;
        int k = n;
        while (k > n - i)
        {
            cout<<value;
            value--;
            k--;
        }
        cout << endl;
        i++;
    }

    return 0;
}
