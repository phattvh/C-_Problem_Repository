//Author: Phat Tran
//All my info: https://phattvh.is-not-a.dev


#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define el "\n"
#define fastio ios_base::sync_with_stdio(false);cin.tie(NULL)

ll n;

bool check(ll n){
    if (n < 2) return false;
    for(int i = 2; i * i <= n; i += 1) if (n % i == 0) return false;

    return true;
}

int main(){
    fastio;

    freopen("output.txt", "w", stdout);

    while(cin >> n){
        if(check(n)) cout << n << " ";
    }


    return 0;
}
/*
in
1 2 3 4 5 6 7 8 9 10

out
2 3 5 7

in ra số nguyen to trong dãy
*/
