#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define el "\n"
#define fastio ios_base::sync_with_stdio(false); cin.tie(NULL);

vector<string> v;
string s;

int main(){
    fastio;

    while(cin >> s) v.push_back(s);

    for(int i = v.size() - 1; i >= 0; i -= 1) cout << v[i] << " ";

    return 0;
}
/*
in
hello world

out
world hello
*/
