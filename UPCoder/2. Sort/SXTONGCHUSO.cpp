//Author: Phat Tran
//All my info: https://phattvh.is-not-a.dev
#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define el "\n"
#define fastio ios_base::sync_with_stdio(false); cin.tie(NULL);

bool isprime(ll n){
    string s = to_string(n);
    ll t = 0;
    for (int i = 0; i < s.length(); i += 1) t = t + (s[i] - '0');

    if (t <= 1) return false;
    if (t == 2) return true;

    for(int i = 2; i * i <= t; i += 1) if (t % i == 0) return false;
    return true;
}

ll ccs(ll n){
    string s = to_string(n);
    ll t = 0;

    for(int i = 0; i < s.length(); i += 1) t = t + (s[i] - '0');
    return t;
}

int main(){
    fastio;

    ll n, a[10000];

    cin >> n;
    for(int i = 0; i < n; i += 1) cin >> a[i];

    //a
    for(int i = 0; i < n; i += 1) if (isprime(a[i])) cout << a[i] << " ";

    cout << el;

    //b
    for(int i = 0; i < n - 1; i += 1)
        for(int j = i + 1; j < n; j += 1){
        if (ccs(a[i]) < ccs(a[j])) swap(a[i], a[j]);
        else if (ccs(a[i]) == ccs(a[j])){
            if (to_string(a[i]).length() > to_string(a[j]).length()) swap(a[i], a[j]);
        }
    }

    for(int i = 0; i < n; i += 1) cout << a[i] << " ";


    return 0;
}
