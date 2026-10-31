//Author: Phat Tran
//All my info: https://phattvh.is-not-a.dev
#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define el "\n"
#define fastio ios_base::sync_with_stdio(false); cin.tie(NULL);



int main(){
    fastio;

    ll kl = 0, kl1, gttr;
    string s;

    while(cin >> s){
        string rs = "";
        for(int i = s.length() - 1; i >= 0; i -= 1) rs += s[i];
        kl1 = stoll(rs);
        if (kl1 > kl) {
            kl = kl1;
            gttr = stoll(s);
        }
    }

    cout << gttr;




    return 0;

}

