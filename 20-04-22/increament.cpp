#include <iostream>
using namespace std;

int main()
{
    int a, b = 1;
    a = 10;
    if (++a)
        cout << b << endl;
    else
    {
        cout << ++b << endl;
    }

    a=1, b=2;
    
    if (a-- > 0 && ++b >2)
    {
        cout<< "Raj1" << endl;
    }
    else{
        cout<< "Raj2" << endl;
    }
    cout<< a << " " << b << endl;

    a=1, b=2;
    if (a-- > 0 || ++b > 2)    // second condition will not run if first condition is true
    {
        cout<< "Raj1" << endl;
    }
    else{
        cout<< "Raj2" << endl;
    }
    cout<< a << " " << b << endl;

    int c=2;
    cout << ++c << endl;
    

    return 0;
}