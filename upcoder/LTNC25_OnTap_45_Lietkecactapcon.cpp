#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define el "\n"
#define fastio ios_base::sync_with_stdio(false); cin.tie(NULL);

ll n, a[100], r[100];

void xuat(ll k){
    cout << "(";
    for(int i = 0; i < k; i += 1) {
        cout << r[i];
        if (i < k - 1) cout << " ";
    }
    cout << ")" << el;
}

void quaylui(ll i, ll st, ll k){
    if (i == k){
        xuat(k);
        return;
    }

    for(int j = st; j < n; j += 1){
        r[i] = a[j];
        quaylui(i + 1, j + 1, k);
    }

}

int main(){
    fastio;

    cin >> n;
    for(int i = 0; i < n; i += 1) cin >> a[i];
    sort(a, a + n);

    cout << "()" << el;
    for(int i = 1; i <= n; i += 1) quaylui(0, 0, i);




    return 0;
}

/*
in
3
1 2 3
out
()
(1)
(2)
(3)
(1 2)
(1 3)
(2 3)
(1 2 3)
*/
