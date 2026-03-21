#include <bits/stdc++.h>
#define ll long long
using namespace std;
int main(){
   ll n,x,y;
   cin >> n;
   ll say = 0;
   for(int i = 0; i < n; i++){
       cin >> x >> y;// 
       say += (y - x + 1);
   }
   cout << say;

}