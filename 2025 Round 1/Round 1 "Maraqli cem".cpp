#include <bits/stdc++.h>
using namespace std;
int main(){
    long long a,b;
    cin >> a >> b;
    // 5 5 
    //-5 -5
    if(a == b and a < 0){
        cout << "-";
    }
    else if(a == b and a > 0){
        cout << "+";
    }
    
    else if(abs(a)< b ){
        cout << "+";
    }
    else if(abs(a) > b){
        cout << "-";
    }
    // -5 5 - > 0
    else if(a == b * (-1)){
        cout << 0;
    }

    
}