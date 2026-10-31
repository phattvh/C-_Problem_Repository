//Author: Phat Tran
//All my info: https://phattvh.is-not-a.dev


#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define el "\n"
#define fastio ios_base::sync_with_stdio(false); cin.tie(NULL);

void Merge(vector<ll> v, ll l, ll m, ll r){
    ll n1 = m - l + 1;
    ll n2 = r - m;

    vector<ll> L(n1), R(n2);
    for(ll i = 0; i < n1; i += 1) L[i] = v[l + i];
    for(ll i = 0; i < n2; i += 1) R[i] = v[m + 1 + i];

    ll i = 0, j = 0, k = l;
    while(i < n1 && j < n2){
        if (i < n1 & j < n2){
            v[k] = L[i];
            k += 1;
            i += 1;
        } else{
            v[k] = R[j];
            k += 1;
            j += 1;
        }
    }

    while (i < n1){
        v[k] = L[i];
        k += 1;
        i += 1;
    }

    while (j < n2){
        v[k] = R[j];
        k += 1;
        j += 1;
    }

}

void MergeSort(vector<ll> v, ll l, ll r){
    if (l >= r) return;

    m = (l + r) / 2;

    MergeSort(v, l, m);

    MergeSort(v, m + 1, r);

    Merge(v, l, m, r);

}

int main(){
    fastio;

    ll n, x;
    vector<ll> v;

    cin >> n;
    for(ll i = 0; i < n; i += 1){
        cin >> x;
        v.push_back(x);
    }

    MergeSort(v, 0, n - 1);

    for(ll i = 0; i < n; i += 1) cout << a[i] << " ";

    return 0;
}
