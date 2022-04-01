#include<iostream>
using namespace std;

int main()
{
    int n;
    cin>>n;

    // char ch = 65;

    int i=0;
    // while(i<n){
    //     int j=0;
    //         char ch = 65;
    //     while (j<n)
    //     {   
    //         printf("%c ", ch);
    //         j++;
    //         ch++;
    //     }
    //     cout<<endl;
    //     i++;
    // }
    // while (i<n)
    // {
    //     char ch = 65;
    //     int j=0;
    //     while(j<=i){
    //         cout << (char)(ch+i+j);
    //         j++;
    //     }
    //     cout<<endl;
    //     i++;
    // }
    
    while (i<n)
    {
        char ch = 65;
        int j=0;
        while(j<=i){
            cout << (char)(ch+n-i+j-1);
            j++;
        }
        cout<<endl;
        i++;
    }

    return 0;
}
