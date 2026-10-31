#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define el "\n"
#define fastio ios_base::sync_with_stdio(false);cin.tie(NULL)


int main(){
    fastio;

    string s;
    cin >> s;

    for(int i = 0; i < s.length(); i += 1) if (s[i] == '_') s[i] = ' ';

    cout << s;

    return 0;
}
/*
in
hom_nay_troi_dep

out
hom nay troi dep
*/
