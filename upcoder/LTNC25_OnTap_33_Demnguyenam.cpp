#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define el "\n"
#define fastio ios_base::sync_with_stdio(false);cin.tie(NULL)


int main(){
    fastio;

    string s;
    getline(cin, s);
    ll dem = 0;

    for(int i = 0; i < s.length(); i += 1){
        s[i] = tolower(s[i]);
        if (s[i] == 'a' || s[i] == 'u' ||
            s[i] == 'o' || s[i] == 'e' || s[i] == 'i') dem += 1;
    }

    cout << dem;

    return 0;
}
/*
in
This is a simple test

out
6

gt: a e o u i => 6 cai trong in
*/
