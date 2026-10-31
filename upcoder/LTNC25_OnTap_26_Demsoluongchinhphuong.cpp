#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define el "\n"
#define fastio ios_base::sync_with_stdio(false);cin.tie(NULL)

bool iscp(ll n){
    if (n < 1) return false;
    ll m = (ll)sqrt(n);
    return m * m == n;
}

int main(){
    fastio;

    ll n;
    vector<ll> v;

    while(cin >> n){
        if (iscp(n)) v.push_back(n);
    }

    cout << v.size();


    return 0;
}
/*
in
4 2 5 1 4 7 9

out
4

gt 4 va 9 va 4 va 1
*/
