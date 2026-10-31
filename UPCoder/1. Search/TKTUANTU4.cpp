//Author: Phat Tran
//All my info: https://phattvh.is-not-a.dev
#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define el "\n"
#define fastio ios_base::sync_with_stdio(false); cin.tie(NULL);




int main(){
    fastio;

    ll x, n, maxn = LLONG_MIN, dem = 0;
    vector<ll> v;

    cin >> x;
    while(cin >> n) v.push_back(n);

    for(int i = 0; i < v.size(); i += 1) if (v[i] > maxn && v[i] <= x) maxn = v[i];

    for(int i = 0; i < v.size(); i += 1) if (maxn == v[i]) {
        cout << i << " ";
        dem += 1;
    }

    if (dem == 0) cout << -1;


    return 0;
}
