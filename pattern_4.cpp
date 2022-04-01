#include <iostream>
using namespace std;

int main()
{
    int n;
    cin >> n;

    int i = 0;

    // while (i < n)
    // {
    //     int j = 0;
    //     while (j < n)
    //     {
    //         if (j < n - i - 1)
    //         {
    //             cout << "  ";
    //         }
    //         else
    //         {
    //             cout << " *";
    //         }
    //         j++;
    //     }
    //     cout<<endl;
    //     i++;
    // }

    // while (i < n)
    // {
    //     int space = 0;
    //     while (space < i)
    //     {
    //         cout << " ";
    //         space++;
    //     }
    //     int j = 0;
    //     while (j < n - i)
    //     {
    //         cout << "*";
    //         j++;
    //     }
    //     cout << endl;
    //     i++;
    // }

    while(i<n){
        int j = n;
        while(j>0){
            if (j>n-i)
            {
                cout<<" ";
            }
            else{
                cout<<"*";
            }
            j--;
        }
        cout<<endl;
        i++;
    }

    return 0;
}
