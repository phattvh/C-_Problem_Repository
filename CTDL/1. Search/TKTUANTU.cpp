#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define el "\n"
#define fastio ios_base::sync_with_stdio(false); cin.tie(NULL)

int main(){
    fastio;

    ll n, x, a[1000];
    cin >> n >> x;

    for (int i = 0; i < n; i += 1) cin >> a[i];

    for(int i = 0; i < n; i += 1) if (a[i] == x){
        cout << i;
        return 0;
    }

    cout << -1;

    return 0;
}
