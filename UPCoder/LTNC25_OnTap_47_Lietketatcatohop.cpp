//Author: Phat Tran
//All my info: https://phattvh.is-not-a.dev
#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define el "\n"
#define fastio ios_base::sync_with_stdio(false); cin.tie(NULL);

ll n, m, a[100], r[100];

void xuat(){
    cout << "(";
    for(int i = 0; i < m; i += 1) {
        cout << r[i];
        if (i < m - 1) cout << " ";
    }
    cout << ")" << el;
};

void quaylui(ll i, ll st){
    if (i == m) {
        xuat();
        return;
    }

    for(int j = st; j < n; j += 1) {
        r[i] = a[j];
        quaylui(i + 1, j + 1);
    }

}

int main(){
    fastio;

    cin >> n >> m;
    for(int i = 0; i < n; i += 1) cin >> a[i];

    quaylui(0, 0);

    return 0;
}
/*
Input
4 2
1 2 3 4

out
(1 2)
(1 3)
(1 4)
(2 3)
(2 4)
(3 4)
*/
