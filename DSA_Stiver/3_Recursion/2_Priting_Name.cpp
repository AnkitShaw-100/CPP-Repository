#include <iostream>
using namespace std;

string s = "Ankit";
int count = 0;

void print()
{
    if (count == 10)
        return;
    count++;
    cout << s << endl;
    print();
}

int main()
{
    print();
    return 0;
}