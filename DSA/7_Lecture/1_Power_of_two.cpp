#include<iostream>
using namespace std;

int main(){
  int n , ans = 1;
  cout << "Enter the power : " ;
  cin >> n ;

  for(int i = 0; i <= 30; i++) { 
        //cout<<" ans "<<ans <<endl;
        if(ans == n){
            return true;
        }
        if(ans < 1073741824) // (INT_MAX/2)=1073741824        
        ans = ans * 2;   
        }
        return false;
}    
        