/*
        1
        A B
        1 2 3
        A B C D
        1 2 3 4 5

*/

#include <iostream>
using namespace std;

int main()
{
    int n, i, j;
    char ch;
    cout << "Enter the limit: ";
    cin >> n;

    for (i = 1; i <= n; i++)
    {
        for (j = 1; j <= i; j++)
        {
            if (i % 2 == 0)
            {
                // ch = ch + j;
                cout << char(64 + j) << " ";
            }
            else
            {
                cout << j << " ";
            }
        }
        cout << endl;
    }
}
