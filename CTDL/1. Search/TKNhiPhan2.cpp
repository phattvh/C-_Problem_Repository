#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define el "\n"
#define fastio ios_base::sync_with_stdio(false); cin.tie(NULL)

void binarysearch(ll a[], ll n, ll x){
    ll l = 0, r = n - 1;

    while (l <= r){
        ll m = (l + r) / 2;

        if (a[m] == x) {
            ll i = m;
            while (i >= 0 && a[i] == a[m]) i -= 1;
            i += 1;
            ll j = i;
            while (j < n && a[i] == a[j]) {
                cout << j << " ";
                j += 1;
            }
            return;
        }
        else if (a[m] < x) l = m + 1;
        else r = m - 1;
    }
    cout << -1;
}

int main(){
    fastio;

    ll n, x, a[1000];
    cin >> n >> x;

    for (int i = 0; i < n; i += 1) cin >> a[i];

    binarysearch(a, n, x);

    return 0;
}
