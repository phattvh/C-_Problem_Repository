#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define el "\n"
#define fastio ios_base::sync_with_stdio(false);cin.tie(NULL)

bool condition(ll a, ll b){
    if (abs(a) < abs(b)) return false;
    if (abs(a) > abs(b)) return true;
    return false;
}

int main(){
    fastio;

    ll n;
    vector<ll> v;

    while(cin >> n) v.push_back(n);

    sort(v.begin(), v.end(), condition);

    for(int i = 0; i < v.size(); i += 1) cout << v[i] << " ";


    return 0;
}
/*
in
-6 3 19 -64 32

out
-64 32 19 -6 3

gt sap xep theo gia tri tuyet doi
*/
