//Author: Phat Tran
//All my info: https://phattvh.is-not-a.dev


#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define el "\n"
#define fastio ios_base::sync_with_stdio(false);cin.tie(NULL)

ll n, tu = 0, tn;

ll tonguoc(ll n){
    ll dem = 0;
    for(int i = 1; i <= n; i += 1)
        if (n % i == 0) dem += i;

    return dem;
}

int main(){
    fastio;

    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);

    while(cin >> n){
        ll m = tonguoc(n);
        if (m > tu){
            tu = m;
            tn = n;
        }
    }

    cout << tn;


    return 0;
}
/*
in
1 2 3 4 5 6 7 8 9 10

out
10

in ra số có tổng ước lớn nhất trong dãy
*/
