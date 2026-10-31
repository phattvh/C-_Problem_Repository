//Author: Phat Tran
//All my info: https://phattvh.is-not-a.dev
#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define el "\n"
#define fastio ios_base::sync_with_stdio(false); cin.tie(NULL);

void SelectionSort(ll a[], ll n){
    for(ll i = 0; i < n; i += 1){
        ll mini = i;
        for(ll j = i + 1; j < n; j += 1) if (a[j] < a[mini]) 
            mini = j;
        swap(a[mini], a[i]);
    }
}

int main(){
    fastio;

    ll n, a[10000];

    cin >> n;
    for(ll i = 0; i < n; i += 1) cin >> a[i];

    SelectionSort(a, n);

    for(ll i = 0; i < n; i += 1) cout << a[i] << " "; 

    return 0;
}
