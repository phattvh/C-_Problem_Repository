//Author: Phat Tran
//All my info: https://phattvh.is-not-a.dev


#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define el "\n"
#define fastio ios_base::sync_with_stdio(false);cin.tie(NULL)


int main(){
    fastio;

    string s;
    getline(cin, s);
    vector<char> v;

    cout << s[0];
    v.push_back(s[0]);

    for(int i = 1; i < s.length(); i += 1){
        if (s[i] != v[v.size() - 1]){
            v.push_back(s[i]);
            cout << s[i];
        }
    }

    return 0;
}
/*
in
aaabbccdaa

out
abcda
*/
