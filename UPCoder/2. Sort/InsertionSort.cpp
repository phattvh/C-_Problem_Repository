//Author: Phat Tran
//All my info: https://phattvh.is-not-a.dev
#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define el "\n"
#define fastio ios_base::sync_with_stdio(false); cin.tie(NULL);

void InsertionSort(ll a[], ll n){
    for(ll i = 1; i < n ; i += 1){
        ll key = a[i], j = i - 1;
        
        while(j >= 0 && a[j] > key){
            a[j + 1] = a[j];
            j -= 1;
        }

        a[j + 1] = key;
    }
}

int main(){
    fastio;

    ll n, a[10000];

    cin >> n;
    for(ll i = 0; i < n; i += 1) cin >> a[i];

    InsertionSort(a, n);

    for(ll i = 0; i < n; i += 1) cout << a[i] << " "; 

    return 0;
}
