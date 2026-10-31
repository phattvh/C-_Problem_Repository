#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define el "\n"
#define fastio ios_base::sync_with_stdio(false);cin.tie(NULL)

int main(){
    fastio;

    ll n;
    vector<ll> v;

    while(cin >> n) v.push_back(n);

    sort(v.begin(), v.end());

    for(int i = 0; i < v.size(); i += 1) cout << v[i] << " ";


    return 0;
}
/*
in
5 3 6 1 4

out
1 3 4 5 6

*/
