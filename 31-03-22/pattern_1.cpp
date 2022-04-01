#include <iostream>

using namespace std;

int main()
{
    int n;
    cin >> n;

    int p = 1;
    int i = 0;
    while (i < n)
    {
        int j = 0;
        while (j < n)
        {
            cout << p <<" ";
            p++;
            j++;
        }
        cout << endl;
        i++;
    }

    return 0;
}