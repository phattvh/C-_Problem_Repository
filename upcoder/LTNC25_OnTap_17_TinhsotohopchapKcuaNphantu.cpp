#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define el "\n"
#define fastio ios_base::sync_with_stdio(false);cin.tie(NULL)

ll dequy(ll n, ll k){
    if (k == 0 || n == k) return 1;

    return dequy(n - 1, k) + dequy(n - 1, k - 1);
}

int main(){
    fastio;

    ll n, k;
    cin >> n >> k;

    cout << dequy(n, k);


    return 0;
}
/*
in
5 2

out
10
*/
