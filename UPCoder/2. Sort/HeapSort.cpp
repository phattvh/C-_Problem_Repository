//Author: Phat Tran
//All my info: https://phattvh.is-not-a.dev
#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define el "\n"
#define fastio ios_base::sync_with_stdio(false); cin.tie(NULL)

void Heapify(ll a[], ll n, ll i){
    ll largest = i;
    ll l = i * 2 + 1;
    ll r = i * 2 + 2;

    if (l < n && a[l] > a[largest]) largest = l;
    if (r < n && a[r] > a[largest]) largest = r;

    if (largest != i) {
        swap(a[i], a[largest]);
        Heapify(a, n, largest);
    }

}

void HeapSort(ll a[], ll n){
    for(int i = n / 2 - 1; i >= 0; i -=1) Heapify(a, n, i);

    for(int i = n - 1; i > 0; i-= 1) {
        swap(a[0], a[i]);
        Heapify(a, i, 0);
    }

}

int main(){
    fastio;

    ll n, a[1000];

    cin >> n;
    for(ll i = 0; i < n; i += 1) cin >> a[i];

    HeapSort(a, n);

    for(int i = 0; i < n; i += 1) cout << a[i] << " ";


    return 0;
}
