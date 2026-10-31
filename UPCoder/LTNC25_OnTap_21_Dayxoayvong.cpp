//Author: Phat Tran
//All my info: https://phattvh.is-not-a.dev


#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define el "\n"
#define fastio ios_base::sync_with_stdio(false);cin.tie(NULL)

int main(){
    fastio;

    ll n, k, t;
    vector<ll> v;

    cin >> n >> k;
    for(int i = 0; i < n; i += 1){
        cin >> t;
        v.push_back(t);
    }

    for(int i = 0; i < k; i += 1){
        v.push_back(v[0]);
        v.erase(v.begin());
    }

    for(int i = 0; i < n; i += 1) cout << v[i] << " ";


    return 0;
}
/*
in
5 3
4 3 6 8 1

out
8 1 4 3 6

dem 4 xuong cuoi day -> 3 -> 6
*/
