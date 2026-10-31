#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define el "\n"
#define fastio ios_base::sync_with_stdio(false);cin.tie(NULL)

ll luythua(ll x, ll n){
    if (n == 0) return 1;

    return x * luythua(x, n - 1);
}

ll sum(ll x, ll n){
    if (n == 0) return 1;

    return luythua(x, n) + sum(x, n - 1);
}

int main(){
    fastio;

    ll n, x;
    cin >> x >> n;

    cout << sum(x, n);

    return 0;
}
/*
in
3 2

out
13
*/
