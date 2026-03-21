#include <bits/stdc++.h>
#define ll long long
using namespace std;
int main(){
   ll a,b,c,d;
   cin >> a >> b >> c >> d;
   ll say = 0;
   if(a < d){
       say = say + 1;
   }
   if(a < c ){
       say = say + 1;
   }
   if(a < b ){
       say = say + 1;
   }
   
   cout << say;

}