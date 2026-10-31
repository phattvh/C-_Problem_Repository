//Author: Phat Tran
//All my info: https://phattvh.is-not-a.dev


#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define el "\n"
#define fastio ios_base::sync_with_stdio(false); cin.tie(NULL);

bool isprime(ll n){
    if (n <= 1) return false;
    if (n == 2) return true;
    for(int i = 2; i * i <= n; i += 1) if (n % i == 0) return false;
    return true;
}

int main(){
    fastio;

    ll n, a[10000];

    cin >> n;
    for(int i = 0; i < n; i += 1) cin >> a[i];

    for (int i = 0; i < n - 1; i += 1){
        if (isprime(a[i])){
            for(int j = i + 1; j < n; j += 1) if (isprime(a[j]) && a[i] < a[j]){
                swap(a[i], a[j]);
            }
        }
    }
    for(int i = 0; i < n; i += 1) cout << a[i] << " ";

    return 0;
}
