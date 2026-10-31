//Author: Phat Tran
//All my info: https://phattvh.is-not-a.dev


#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define el "\n"
#define fastio ios_base::sync_with_stdio(false); cin.tie(NULL);

int main(){
    fastio;

    ll len = 1, counte = 9, start = 1, n, m;

    cin >> n;

    while(n > len * counte){
        n -= len * counte;
        len += 1;
        counte *= 10;
        start *= 10;
    }

    m = start + (n - 1) / len;

    string s = to_string(m);
    cout << s[(n - 1) % len];

    return 0;

}

