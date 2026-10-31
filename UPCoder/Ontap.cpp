//Author: Phat Tran
//All my info: https://phattvh.is-not-a.dev


#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define el "\n"
#define fastio ios_base::sync_with_stdio(false);cin.tie(NULL);

vector <ll> v, sdx, kdx;
ll n, tdx = 0, maxn = 0, tkdx = 0, maxm = 100;

bool ispalin(ll n){
    string s = to_string(n);
    for(int i = 0; i < s.length() / 2; i ++) if (s[i] != s[s.length() - 1 - i]) return false;
    return true;
}

//bool ispalin(ll n){
//    if (n < 0) return false;
//    ll reversed = 0, original = n;
//    while (n > 0) {
//        reversed = reversed * 10 + (n % 10);
//        n /= 10;
//    }
//    return original == reversed;
//}


int main(){
    fastio;

    freopen("vector_inp.txt", "r", stdin);
    freopen("vector_out.txt", "w", stdout);

    while(cin >> n){
        v.push_back(n);
    }

    for(vector<ll>::iterator it = v.begin(); it != v.end(); it ++){
        if (ispalin(*it)){
            tdx += *it;
            sdx.push_back(*it);
            if (maxn < *it) maxn = *it;
        }
        else {
            tkdx += *it;
            kdx.push_back(*it);
            if (maxm > *it) maxm = *it;
        }
    }

    sort(sdx.begin(), sdx.end());
    sort(kdx.begin(), kdx.end());

    cout << maxn << " " << tdx << el;
    for(int i = sdx.size() - 1; i >= 0; i --) cout << sdx[i] << " ";
    cout << el << maxm << " " << tkdx << el;
    for(int i = 0; i < kdx.size(); i ++) cout << kdx[i] << " ";





    return 0;
}
