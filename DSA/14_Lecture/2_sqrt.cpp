#include<iostream>
using namespace std;


int sqrtinteger(int n){

   int start = 0;
   int end = n;
   long long int mid = start + (end - start)/2;

   long long int ans = -1;
   while(start <= end){
    long long int square = mid * mid;

    if(square == n){
        return mid;
    }
    if(square < n){
        ans = mid;
        start = mid + 1;
    }
    else{
        end = mid - 1;
    }
    mid = start + (end - start)/2;
   }
   return ans;
}

double aquarate(int n, int aquarate, int temp){
    double factor = 1;
    double ans = temp;
    for(int i =0; i < aquarate; i++){
        factor = factor/10;
    }

    for(double j = ans; j*j < n; j=j+factor){
        ans = j;
    }
    return ans;
}

int main(){
    int n;
    cout << "Enter the number :" <<endl;
    cin >> n;

    int temp = sqrtinteger(n);
    cout << "Answer is : " << aquarate(n, 3, temp) <<endl;
    return 0;
}