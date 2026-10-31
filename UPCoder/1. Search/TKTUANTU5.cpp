//Author: Phat Tran
//All my info: https://phattvh.is-not-a.dev
#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define el "\n"
#define fastio ios_base::sync_with_stdio(false); cin.tie(NULL);

int main(){
    fastio;

    ll n, x, y, a[100000];

    cin >> n >> x >> y;
    for(int i = 0; i < n; i += 1) cin >> a[i];

    for(int i = 0; i < n; i += 1) if (a[i] == x){
        cout << i;
        return 0;
    }

    ll idx = -1, mindiff = 20000;

    for(int i = 0; i < n; i += 1){
        ll diff = abs(a[i] - x);
        if ((diff == -1 || diff < mindiff) && diff <= y){
            mindiff = diff;
            idx = i;
        }
    }

    cout << idx;

    return 0;
}
