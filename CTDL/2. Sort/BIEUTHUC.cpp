#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define el "\n"
#define fastio ios_base::sync_with_stdio(false); cin.tie(NULL);



int main(){
    fastio;

    ll n, a[100000], k, s = 0;

    cin >> n >> k;
    for(int i = 0; i < n; i += 1) cin >> a[i];

    sort(a + 1, a + n);

    ll slt = n - k - 1;

    for (int i = 1; i < n; i += 1) if (slt > 0) {
        a[i] = -a[i];
        slt -= 1;
    } else break;

    for (int i = 0; i < n; i += 1) s += a[i];

    cout << s;


    return 0;
}
