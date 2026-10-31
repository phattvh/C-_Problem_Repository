//Author: Phat Tran
//All my info: https://phattvh.is-not-a.dev
#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define el "\n"
#define fastio ios_base::sync_with_stdio(false); cin.tie(NULL)

ll binarysearch(ll a[], ll n, ll x){
    ll l = 0, r = n - 1;
    while (l <= r){
        ll m = (l + r) / 2;

        if (a[m] == x) return m;
        else if (a[m] < x) r = m - 1;
        else l = m + 1;
    }
    return -1;
};

int main(){
    fastio;

    ll n, x, a[1000];
    cin >> n >> x;

    for (int i = 0; i < n; i += 1) cin >> a[i];

    cout << binarysearch(a, n, x);

    return 0;
}
