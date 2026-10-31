//Author: Phat Tran
//All my info: https://phattvh.is-not-a.dev
#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define el "\n"
#define fastio ios_base::sync_with_stdio(false);cin.tie(NULL);

ll n, a[100], c2 = 0, c = 1000;
vector<ll> v1, v2;

void xuat(){
    ll m = 0, k = 0;

    for(int i = 0; i < v1.size(); i += 1) m += v1[i];
    for(int i = 0; i < v2.size(); i += 1) k += v2[i];

    if (abs(m - k) < c) c = abs(m - k);
}

void quaylui(ll i){
    if (i == n) {
        xuat();
        return;
    }

    v1.push_back(a[i]);
    quaylui(i + 1);
    v1.pop_back();

    v2.push_back(a[i]);
    quaylui(i + 1);
    v2.pop_back();

}

int main(){
    fastio;

    cin >> n;
    for(int i = 0; i < n; i += 1) cin >> a[i];

    quaylui(0);

    cout << c;


    return 0;
}
/*
in
5
3 2 7 4 1
out
1
de bai: chia sao cho chenh lech 2 giỏ là nho nhat
*/
