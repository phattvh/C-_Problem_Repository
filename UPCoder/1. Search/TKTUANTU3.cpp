//Author: Phat Tran
//All my info: https://phattvh.is-not-a.dev


#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define el "\n"
#define fastio ios_base::sync_with_stdio(false); cin.tie(NULL)


int main(){
    fastio;

    vector<ll> v;
    ll n, x, maxn = LLONG_MIN, maxi;
    cin >> x
    while (cin >> n){
        v.push_back(n);
    }

    for(int i = 0; i < v.size(); i += 1) if (v[i] > maxn & v[i] <= x){
        maxn = v[i];
        maxi = i;
    }

    cout << maxi;
    return 0;
}
