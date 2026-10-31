//Author: Phat Tran
//All my info: https://phattvh.is-not-a.dev
#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define el "\n"
#define fastio ios_base::sync_with_stdio(false);cin.tie(NULL)

ll n;

ll dequy(ll i){
    if (i == 0) return 0;

    return (i % 10) + dequy(i / 10);
}

int main(){
    fastio;

    cin >> n;
    cout << dequy(n);


    return 0;
}
/*
in
123

out
6
*/
