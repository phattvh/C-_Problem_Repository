//Author: Phat Tran
//All my info: https://phattvh.is-not-a.dev


#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define el "\n"
#define fastio ios_base::sync_with_stdio(false); cin.tie(NULL);

void QuickSort(ll a[], ll n){
    ll pivot = a[(l + r) / 2];
    ll i = l, j = r;

    while(i < j){
        while(a[i] < p){
            i += 1;
        }

        while (a[j] > p){
            j -= 1;
        }

        if (i <= j){
            swap(a[i], a[j]);
            i += 1;
            j -= 1;
        }
    }

    if (i < r) QuickSort(a, i, r);

    if (l < j) QuickSort(a, l, j);

}

int main(){
    fastio;

    ll n, a[1000];

    cin >> n;
    for(ll i = 0; i < n; i += 1) cin >> a[i];

    QuickSort(a, n);

    for(int i = 0; i < n; i += 1) cout << a[i] << " ";

    return 0;
}
