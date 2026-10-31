//Author: Phat Tran
//All my info: https://phattvh.is-not-a.dev


#include<bits/stdc++.h>
using namespace std;

#define ll long long
#define el "\n"
#define fastio ios_base::sync_with_stdio(false); cin.tie(NULL);

ll n, w, a[100], c[100], kl = 0;
bool b[100], k[100];

void quaylui(ll i, ll cnht, ll z){

    if (i == n){
        if (z > kl) {
            kl = z;
            for(int j = 0; j < n; j++) k[j] = b[j];
        }
        return;
    }

    if (cnht - a[i] >= 0){
        b[i] = true;
        quaylui(i + 1, cnht - a[i], z + c[i]);
        b[i] = false;
    }

    quaylui(i + 1, cnht, z);
}

int main(){
    fastio;

    cin >> n >> w;

    for(int i = 0; i < n; i += 1) cin >> a[i] >> c[i];
    memset(b, false, sizeof(b));
    memset(k, false, sizeof(k));

    quaylui(0, w, 0);

    cout << kl << el;

    for(int i = 0; i < n; i += 1) cout << k[i] << " ";

    return 0;
}
