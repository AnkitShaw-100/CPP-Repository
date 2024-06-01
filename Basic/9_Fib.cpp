// Fibonacci
#include<iostream>
using namespace std;

int main(){
    int n,i,a,b,c;
    cout << "Enter the limit : ";
    cin  >> n ;
    a=0;
    b=1;
    cout << a << " "<< b << " ";
    for(i=0; i<n; i++){
        c=a+b;
        a=b;
        b=c;
        cout << c << " ";
    }
    
}