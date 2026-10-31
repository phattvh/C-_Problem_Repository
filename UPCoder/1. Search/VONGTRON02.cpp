//Author: Phat Tran
//All my info: https://phattvh.is-not-a.dev


#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define el "\n"
#define fastio ios_base::sync_with_stdio(false); cin.tie(NULL);

int main(){
    fastio;

    ll n, k, z[100], t = 0;
    vector <ll> v;

    cin >> n >> k;
    for(int i = 0; i < k; i += 1) cin >> z[i];
    for(ll i = 0; i < n; i += 1){
        v.push_back(i);
    }

    ll i = 0;
    while (v.size() != 0){
        t = (t + z[i] - 1) % v.size();
        cout << v[t] << " ";
        v.erase(v.begin() + t);
        if (i < k - 1) i += 1;
            else i = 0;
    }


    return 0;
}
