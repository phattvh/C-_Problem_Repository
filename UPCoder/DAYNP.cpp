//Author: Phat Tran
//All my info: https://phattvh.is-not-a.dev
#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define el "\n"
#define fastio ios_base::sync_with_stdio(false); cin.tie(NULL);

ll a[1000], n, m;
vector<string> v;

void xuat(){
    for(int i = 0; i < n; i += 1) cout << a[i];
    cout << el;
}

void quaylui(ll i){
    if (i == n) {
        xuat();
        return;
    }

    for(int j = 0; j < 2; j += 1){
        a[i] = j;
        quaylui(i + 1);
    }
}

int main(){
    fastio;

    cin >> n;
    quaylui(0);


    return 0;

}
