//Author: Phat Tran
//All my info: https://phattvh.is-not-a.dev


#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define el "\n"
#define fastio ios_base::sync_with_stdio(false); cin.tie(NULL);

ll n, mts[10000];
string s;


int main(){
    fastio;

    cin >> s;
    memset(mts, 0, sizeof(mts));

    for(int i = 0; i < s.length(); i += 1) mts[s[i]] += 1;

    for(int i = 0; i < s.length(); i += 1) if (mts[s[i]] == 1){
        cout << s[i];
        return 0;
    }

    cout << "None";

    return 0;
}

/*
in
aAbBcABa

out
b
*/

