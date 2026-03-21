#include <bits/stdc++.h>
#define ll long long
using namespace std;
int main(){
   ll n;
   cin >> n;
   ll copy = n;
   ll S = 0;
   while(n != 0){
       int son = n % 10;
       n = n / 10;
       if(son != 0){
           S++;
       }
   }
   
   cout << S<< endl;
   //9876   6      6 * 1 , 7 * 10,   8 * 100, 9 * 1000
   ll x = 0;
   while(copy != 0){
       int son = copy % 10;
       if(son != 0){
           cout << son * pow(10,x) << " ";
       }
       x++;
       copy = copy / 10;
   }
   
  
   
}