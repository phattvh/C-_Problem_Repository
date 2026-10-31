//Author: Phat Tran
//All my info: https://phattvh.is-not-a.dev


#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define el "\n"
#define fastio ios_base::sync_with_stdio(false); cin.tie(NULL);


int main(){
    fastio;

    ll n, a[100000];

    cin >> n;
    for(int i = 0; i < n; i += 1) cin >> a[i];

    ll maxlen = 1, pos = 0;
    while(pos < n){
        ll curr = 0, i = pos;
        while (i < n && a[pos] == a[i]){
            curr += 1;
            i += 1;
        }
        if (maxlen < curr) maxlen = curr;
        pos = i;
    }

    cout << n - maxlen;

    return 0;
}
