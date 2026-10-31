//Author: Phat Tran
//All my info: https://phattvh.is-not-a.dev
#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define el "\n"
#define fastio ios_base::sync_with_stdio(false);cin.tie(NULL)

int main(){
    fastio;

    ll n;
    vector<ll> v;

    while(cin >> n){
        v.push_back(n);
    }

    for(int i = 0; i < v.size(); i += 1) cout << v[i] << " ";
    cout << el;
    for(int i = v.size() - 1; i >= 0; i -= 1) cout << v[i] << " ";

    return 0;
}
/*
in
1 2 3 4 5

out
1 2 3 4 5
5 4 3 2 1
*/
