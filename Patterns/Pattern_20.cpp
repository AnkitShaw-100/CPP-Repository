/*
    a
    a b
    a b c
    a b c d

    A
    A B
    A B C
    A B C D

*/
#include <iostream>
using namespace std;

int main()
{
    int n, i, j;
    char ch;
    cout << "Enter the limit: ";
    cin >> n;
    for (i = 97; i < (97 + n); i++)
    {
        for (j = 97; j < i; j++)
        {
            ch = j;
            cout << ch << " ";
        }
        cout << endl;
    }

    for (i = 65; i < (65 + n); i++)
    {
        for (j = 65; j < i; j++)
        {
            ch = j;
            cout << ch << " ";
        }
        cout << endl;
    }
}
