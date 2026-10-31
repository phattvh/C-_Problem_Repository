#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define el "\n"
#define fastio ios_base::sync_with_stdio(false); cin.tie(NULL);

vector<string> v;
string s;

int main(){
    fastio;

    while(cin >> s){
        s[0] = toupper(s[0]);
        for(int i = 1; i < s.length(); i += 1) s[i] = tolower(s[i]);
        v.push_back(s);
    }

    for(int i = 0; i < v.size(); i += 1) cout << v[i] << " ";


    return 0;
}
/*
in
hOa         phaT

out
Hoa Phat
*/
