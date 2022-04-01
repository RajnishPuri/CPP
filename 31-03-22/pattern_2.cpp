// triangle pattern

#include <iostream>
using namespace std;

int main()
{
    int n;
    cin >> n;

    int i = 0;

    while (i < n)
    {

        int j = 0;
        while (j <= i)
        {
            cout << "* ";
            j++;
        }
        cout << endl;

        i++;
    }

    cout<<endl;

    i=0;
    int k;
    while (i < n)
    {

        int j = 0;
        k = i+1;
        while (j <= i)
        {

            cout << k << " ";
            k++;
            j++;
        }
        cout << endl;

        i++;
    }

    cout << endl;

    i = 0;

    while (i < n) // n=4
    {

        int j = 0;
        while (j < n - i) // i=0, j -> 0, 1, 2, 3    i=1, j -> 0, 1, 2     i=2, j-> 0, 1      i=3, j-> 0;
        {
            cout << "* ";
            j++;
        }
        cout << endl;
        i++;
    }

    i=0;
    
    while (i < n)
    {
       
        int j = 0;
        
        while (j<=i)
        {
            cout<<i+j;
            j++;
        }
        cout << endl;

        i++;
    }

    cout << endl;

    return 0;
}
