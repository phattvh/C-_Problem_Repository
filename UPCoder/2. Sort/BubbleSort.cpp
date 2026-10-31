//Author: Phat Tran
//All my info: https://phattvh.is-not-a.dev


#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define el "\n"
#define fastio ios_base::sync_with_stdio(false); cin.tie(NULL)

void BubbleSort(ll a[], ll n){7

    for(ll i = 0; i < n - 1; i += 1){

        bool swapped = false;
        for (ll j = 0; j < n - i - 1; j += 1){

            if (a[j] > a[j + 1]){

                swap(a[j], a[j + 1]);
                swapped = true;
            }

        }

    if (!swapped) break;
    }

}

int main(){
    fastio;

    ll n, a[1000];

    cin >> n;
    for(ll i = 0; i < n; i += 1) cin >> a[i];

    BubbleSort(a, n);

    for(int i = 0; i < n; i += 1) cout << a[i] << " ";


    return 0;
}
