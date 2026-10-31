//Author: Phat Tran
//All my info: https://phattvh.is-not-a.dev


#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define el "\n"
#define fastio ios_base::sync_with_stdio(false);cin.tie(NULL)

ll n;

bool scp(ll n){
    ll m = sqrt(n);
    return m * m == n;
}

int main(){
    fastio;

    freopen("input.txt", "r", stdin);
    //freopen("output.txt", "w", stdout);

    while(cin >> n){
        if (scp(n)) cout << n << " ";
    }

    return 0;
}
/*
in
1 2 3 4 5 6 7 8 9 10

out
1 4 9

in ra số chính phương có trong dãy
*/
