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

void solve(){
    string s;
    cin >> s;
    string s1 = s;
    bool t1 = false;
    bool t11 = false;// böyük həm də kiçik 
    bool t111 = false;
    bool t2 = false;//rəqəm 
    bool t3 = false;//, . ! ? @ # 
    bool t4 = false;//palindrom
    bool t5 = false;//ilk 3 simvolundan alınmış parça ilə son 3 simvolundan 
   
    reverse(all(s));
    if(s == s1){
        t4 = true;
    }
    for(int i = 0; i < s1.size(); i++){
        if(s1[i] == ',' || s1[i] == '.' || s1[i] == '!' || s1[i] == '?' || s1[i] == '@' || s1[i] == '#'){
            t3 = true;
        }
        if(s1[i] >= '1' && s1[i] <= '9' ){
            t2 = true;
        }
        if(s1[i] >= 'a' && s1[i] <= 'z'){
            t11 = true;
        }
        if(s1[i] >= 'A' && s1[i] <= 'Z'){
            t111 = true;
        }
    }
    string s2 = s1.substr(0, 3);
    string s3 = s1.substr(s1.size() - 3,  s1.size());
    if(s2 == s3){
        t5 = true;
    }
    if(t11 && t111){
        t1 = true;
    }
    ll cnt = 0;
    if(t1){
        cnt++;
    }
    if(t2){
        cnt++;
    }
    if(t3){
        cnt++;
    }
    if(t4){
        cnt++;
    }
    if(t5){
        cnt++;
    }

    cout << cnt << endl;

}
int main() {
    fast;
    
    
    ll t = 1;   
 //   cin >> t;
    while (t--) {
        solve();
    }
}
