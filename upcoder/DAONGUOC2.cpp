#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define el "\n"
#define fastio ios_base::sync_with_stdio(false); cin.tie(NULL);

int main(){
    fastio;

    freopen("inDaoNguoc2.txt", "r", stdin);
    freopen("outDaoNguoc2.txt", "w", stdout);

    ll kl = 0, n = 0, kl1, gttr, dem = 0;
    string s, a[1000];

    memset(a, 0, sizeof(a));

    while(cin >> s){
        a[n] = s;
        n += 1;
    }

    for(int i = 0; i < n; i += 1){
        string rs = "";
        for(int j = a[i].length() - 1; j >= 0; j -= 1) rs += a[i][j];
        kl1 = stoll(rs);
        if (kl1 > kl) {
            kl = kl1;
            gttr = stoll(a[i]);
        }
    }

    cout << gttr << el;

    for(int i = 0; i < n; i += 1) if (stoll(a[i]) == gttr) dem += 1;
    if (dem > 1) for(int i = 0; i < n; i += 1) if (stoll(a[i]) == gttr) cout << i << " ";



    return 0;

}

