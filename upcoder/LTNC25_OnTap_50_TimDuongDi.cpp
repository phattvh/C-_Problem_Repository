#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define el "\n"
#define fastio ios_base::sync_with_stdio(false); cin.tie(NULL);

ll n, a[100][100], maxn = 0;

bool check(ll i, ll j){
    if (i < 0 || j < 0 || i >= n || j >= n || a[i][j] == -1) return false;
    return true;
}

void quaylui(ll i, ll j, ll gt){
    if (i == n - 1 && j == n - 1){
        if (gt > maxn) maxn = gt;
        return;
    }

    if (check(i + 1, j))
        quaylui(i + 1, j, gt * 2 + a[i + 1][j]);

    if (check(i, j + 1))
        quaylui(i, j + 1, gt * 2 + a[i][j + 1]);

}

int main(){
    fastio;

    cin >> n;
    for(int i = 0; i < n; i += 1)
        for(int j = 0; j < n; j += 1) cin >> a[i][j];

    quaylui(0, 0, a[0][0]);

    cout << maxn;


    return 0;
}
/*
in
4
0 0 0 0
0 1 -1 1
1 0 1 1
1 1 1 1

out
31
de bai: tim duong di tu o 0;0 den o n;n; -1 khong di duoc
*/
