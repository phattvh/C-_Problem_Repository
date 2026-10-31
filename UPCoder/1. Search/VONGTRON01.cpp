//Author: Phat Tran
//All my info: https://phattvh.is-not-a.dev


#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define el "\n"
#define fastio ios_base::sync_with_stdio(false); cin.tie(NULL);

int main(){
    fastio;

    ll n, k, t = 0;
    vector <ll> v;

    cin >> n >> k;
    for(ll i = 0; i < n; i += 1){
        v.push_back(i);
    }


    while (v.size() != 0){
        t = (t + k - 1) % v.size();
        cout << v[t] << " ";
        v.erase(v.begin() + t);

    }


    return 0;
}
