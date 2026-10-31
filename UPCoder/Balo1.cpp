//Author: Phat Tran
//All my info: https://phattvh.is-not-a.dev
#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define el "\n"
#define fastio ios_base::sync_with_stdio(false); cin.tie(NULL);

ll n, w, a[1000], kl = 0;
vector<ll> patn, v;

void quaylui(ll i, ll cnht){
    if (i == n) {
        if (w - cnht > kl) {
            kl = w - cnht;
            patn = v;
        }
        return;
    }

    if (a[i] <= cnht){
        v.push_back(i);
        quaylui(i + 1, cnht - a[i]);
        v.pop_back();
    }

    quaylui(i + 1, cnht); //nhanh bo thi luon duoc phep chay

}

int main(){
    fastio;

    cin >> n >> w;

    for(int i = 0; i < n; i += 1) cin >> a[i];

    quaylui(0, w);

    cout << kl << el;
    for(int i = 0; i < patn.size(); i += 1) cout << patn[i] << " ";


    return 0;

}
