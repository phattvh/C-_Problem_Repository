//Author: Phat Tran
//All my info: https://phattvh.is-not-a.dev
#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define el "\n"
#define fastio ios_base::sync_with_stdio(false);cin.tie(NULL)

vector<ll> memo;

ll dequy(ll n){
    if (n == 0) return 0;
    if (n == 1) return 1;

    if (memo[i] != -1) return memo[n];

    if (n % 2 == 0) return memo[n] = dequy(n / 2);
    else{
        int k = n / 2;
        return memo[n] = dequy(k) + dequy(k + 1);
    }
}

int main(){
    fastio;

    ll n, maxn = 0;
    cin >> n;

    memo.assign(n + 1, -1);

    for (int i = 0; i <= n; i++) {
        maxn = max(maxn, dequy(i));
    }

    cout << maxn;



    return 0;
}
/*
in
10

out
4
*/
