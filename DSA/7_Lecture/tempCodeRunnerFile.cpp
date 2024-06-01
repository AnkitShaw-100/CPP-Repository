#include<iostream>
using namespace std;

int main(){
int ans  = 0, x;
   cout << "Enter a number : ";
   cin >> x;;
        while( x != 0) {
            
            int digit = x % 10;
            
            if((ans > 1073741824/10) || (ans == (1073741824/ 10) && digit > 7)) {
                cout << "Overflow occurred!" << endl;
                return 0;
            }
            
            ans = (ans * 10) + digit;
            x = x / 10;
            
        }
        cout << "Reversed number: " << ans << endl;
        return 0;
}

