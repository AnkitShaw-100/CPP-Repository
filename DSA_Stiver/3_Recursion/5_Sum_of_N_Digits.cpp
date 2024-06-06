#include <iostream>
using namespace std;

int sum = 0;
int count = 0;

int print(int n){
    if(count == n)
    return sum;
    // cout << sum << endl;
    count++;
    sum = sum + count;
    print(n);
    
}
int main(){
    int n;
    cout << "Enter the limit : "<<endl;
    cin >> n;
    int ans = print(n);
    cout << "Sum is : " << ans ;
    return 0;
}