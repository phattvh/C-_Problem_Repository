//Author: Phat Tran
//All my info: https://phattvh.is-not-a.dev
#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define el "\n"
#define fastio ios_base::sync_with_stdio(false); cin.tie(NULL)


int main(){
    fastio;

    ll n, x, a[1000], maxn = LLONG_MIN, maxi;

    cin >> n;
    for (int i = 0; i < n; i += 1) {
        cin >> a[i];
        if (a[i] <= x && a[i] > maxn) {
            maxn = a[i];
            maxi = i;
        }
    }

    if (maxn != LLONG_MIN) cout << maxi;
    else cout << -1;
    return 0;
}
