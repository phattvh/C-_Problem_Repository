//Author: Phat Tran
//All my info: https://phattvh.is-not-a.dev
#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define el "\n"
#define fastio ios_base::sync_with_stdio(false);cin.tie(NULL);



int main(){
    fastio;

    ll n = 0;
    string s;
    cin >> s;

    vector<char> v;

    for(int i = 0; i < s.length(); i += 1){
        if (s[i] >= '0' && s[i] <= '9') v.push_back(s[i]);
        else {
            string t;
            for(int j = 0; j < v.size(); j += 1) t = t + v[j];
            if (!v.empty()) {
                n += stoll(t);
                v.erase(v.begin(), v.end());
            }
        }
    }

    if (!v.empty()){
        string t;
        for(int j = 0; j < v.size(); j += 1) t = t + v[j];
        n += stoll(t);
    }

    cout << n;

    return 0;
}
/*
in
abc123def456

out
579

gt: 123 + 456 = 579
*/
