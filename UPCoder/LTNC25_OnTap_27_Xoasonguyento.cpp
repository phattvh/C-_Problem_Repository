//Author: Phat Tran
//All my info: https://phattvh.is-not-a.dev
#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define el "\n"
#define fastio ios_base::sync_with_stdio(false);cin.tie(NULL)

bool snt(ll n){
    if (n < 2) return false;
    for(int i = 2; i * i <= n; i += 1) if (n % i == 0) return false;
    return true;
}

int main(){
    fastio;

    vector<ll> v;
    ll n;

    while(cin >> n){
        if (!snt(n)) v.push_back(n);
    }

    sort(v.begin(), v.end());

    for(int i = 0; i < v.size(); i += 1) cout << v[i] << " ";


    return 0;
}
/*
in
4 2 1 4 7 9

out
1 4 4 9

*/
