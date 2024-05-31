/*

    *        *
    **      **
    ***    ***
    ****  ****
    **********
    **********
    ****  ****
    ***    ***
    **      **
    *        *


*/

#include <iostream>
using namespace std;

int main()
{
    int n, i;
    char ch;
    cout << "Enter the limit: ";
    cin >> n;
    
    // Upper part
    for (i = 1; i <= n; i++)
    {
        // left half
        for (int j = 1; j <= i; j++)
        {
            cout << "*";
        }

        // Spaces
        for (int j = 1; j <= 2 * (n - i); j++)
        {
            cout << " ";
        }

        // right part
        for (int j = 1; j <= i; j++)
        {
            cout << "*";
        }
        cout << endl;
    }

    // Lower part
    for (int i = n; i >= 1; i--)
    {
        // Left stars
        for (int j = 1; j <= i; j++)
        {
            cout << "*";
        }

        // Spaces
        for (int j = 1; j <= 2 * (n - i); j++)
        {
            cout << " ";
        }

        // Right stars
        for (int j = 1; j <= i; j++)
        {
            cout << "*";
        }

        cout << endl;
    }
    return 0;
}
