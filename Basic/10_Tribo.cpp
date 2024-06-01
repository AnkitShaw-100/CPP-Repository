// Tribonacci
#include<iostream>
using namespace std;

int main(){
    int n,i,a,b,c,d;
    cout << "Enter the limit : ";
    cin  >> n ;
    a=0;
    b=0;
    c=1;
    cout << a << " "<< b << " "<< c << " " ;
    for(i=0; i<n-3; i++){
        d=a+b+c;
        a=b;
        b=c;
        c=d;
        cout << d << " ";
    }
    
}

