//Author: Phat Tran
//All my info: https://phattvh.is-not-a.dev


#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define el "\n"
#define fastio ios_base::sync_with_stdio(false); cin.tie(NULL);

int main(){
    fastio;

    char c, a[1000];
    ll n;

    cin >> c >> n;
    for(int i = 0; i < n; i += 1) cin >> a[i];

    if (c == 'A') sort(a, a + n);
    else sort(a, a + n, greater<char>());

    for(int i = 0; i < n; i += 1) cout << a[i] << " ";

    return 0;
}
