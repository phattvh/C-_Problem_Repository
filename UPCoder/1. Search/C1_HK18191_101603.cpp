//Author: Phat Tran
//All my info: https://phattvh.is-not-a.dev
#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define el "\n"
#define fastio ios_base::sync_with_stdio(false); cin.tie(NULL);

int main(){
    fastio;

    ll n, x;
    cin >> n >> x;
    vector<ll> a(n);
    for (int i = 0; i < n; i += 1) cin >> a[i];

    for(int i = 0; i < n; i += 1) {
        if (a[i] == x) {
            cout << "Y" << el << i;
            return 0;
        }
    }

    cout << "N" << el;

    ll max_k = -1e18;
    int last_pos = -1;

    for(int i = 0; i < n; i += 1) {
        if (a[i] < x) {
            if (a[i] > max_k) {
                max_k = a[i];
                last_pos = i;
            }
            else if (a[i] == max_k) {
                last_pos = i;
            }
        }
    }

    cout << last_pos;

    return 0;
}
