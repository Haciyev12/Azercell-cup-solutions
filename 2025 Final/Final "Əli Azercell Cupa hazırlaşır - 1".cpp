#include "bits/stdc++.h"
#define fast ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define ll long long
#define pb push_back
#define in insert
#define F first
#define S second
#define vll vector<ll>
#define all(v) v.begin(),v.end()
#define rep(a, b, c) for (int(a) = (b); (a) < (c); (a)++)//i, 0, n
#define endl '\n'
#define pii pair<ll,ll>
#define yes cout << "Yes" << endl;
#define no cout << "No" << endl;
using namespace std;
const ll INF = 1e18, mod = 1e9 + 7, N = 2e5+1;
ll gcd(ll a, ll b) {
    return b == 0 ? a : gcd(b, a % b);
}
ll lcm(ll a, ll b) {
    return (a / gcd(a, b)) * b;
}
ll modpow(ll a, ll b){
    ll ans = 1;
    while(b > 0){
        if(b % 2 == 1){
            ans *= a;
            ans = ans%mod;
        }
        a *= a;
        a %= mod;
        b = b >> 1;
    }
    return ans % mod;
}
ll inv(ll a){
    return (modpow(a,mod-2)) % mod;
}
bool g(string s){
    
    ll l = 0, r = s.size() - 1;

    while(l < r){
        if(s[l] != s[r]){
            return false;
        }
        l++;
        r--;
    }
    return true;
    
}
void solve(){
   string s;
   cin >> s;
   bool t = false;
   for(int i = 0; i < s.size(); i++){
      
        if(g(s)){
            cout << i << endl;
            return;
        }
        
        s = s.substr(1,s.size()) + s[0];
        //cout << "after function" << " " << s << endl;
   }
   cout << -1<< endl;
    
}
int main() {
    fast;
    ll t = 1;
   // cin >> t;

    while(t--){
        solve();
    }
}
