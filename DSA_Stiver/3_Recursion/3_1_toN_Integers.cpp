#include <iostream>
using namespace std;

int count = 0;

void print(int n){
    if(count == n)
    return;
    count++;
    cout << count << endl;
    print(n);
}
int main(){
    int n;
    cout << "Enter the limit : "<<endl;
    cin >> n;
    print(n);
    return 0;
}