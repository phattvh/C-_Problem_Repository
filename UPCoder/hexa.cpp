//Author: Phat Tran
//All my info: https://phattvh.is-not-a.dev
#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define el "\n"
#define fastio ios_base::sync_with_stdio(false); cin.tie(NULL);

ll n, m;
vector<ll> v;

char tohex(int r){
    if (r < 10) return r + '0';
    return r - 10 + 'A';
}

void xuat(){
    for(int i = v.size() - 1; i >= 0; i--) cout << tohex(v[i]);
}

void dequy(ll i){
    if (i / 16 == 0){
        v.push_back(i % 16);
        xuat();
        return;
    }

    v.push_back(i % 16);
    dequy(i / 16);


}

int main(){
    fastio;

    cin >> n;

    dequy(n);

    return 0;

}
