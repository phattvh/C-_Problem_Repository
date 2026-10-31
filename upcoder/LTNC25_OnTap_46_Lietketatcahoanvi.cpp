#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define el "\n"
#define fastio ios_base::sync_with_stdio(false); cin.tie(NULL);

ll n, a[100], r[100];
bool vst[100];

void xuat(){
    cout << "(";
    for(int i = 0; i < n; i += 1) {
        cout << r[i];
        if (i < n - 1) cout << " ";
    }

    cout << ")" << el;
}

void quaylui(ll i){
    if (i == n){
        xuat();
        return;
    }

    for(int j = 0; j < n; j += 1){
        if (vst[j] == false){
            vst[j] = true;
            r[i] = a[j];
            quaylui(i + 1);
            vst[j] = false;
        }
    }

}

int main(){
    fastio;

    cin >> n;
    for(int i = 0; i < n; i += 1) cin >> a[i];
    sort(a, a + n);
    memset(vst, false, sizeof(vst));

    quaylui(0);

}
/*
Input
3
1 2 3

out
(1 2 3)
(1 3 2)
(2 1 3)
(2 3 1)
(3 1 2)
(3 2 1)
*/
