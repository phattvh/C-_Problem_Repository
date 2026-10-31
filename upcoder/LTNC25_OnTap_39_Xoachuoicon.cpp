#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define el "\n"
#define fastio ios_base::sync_with_stdio(false); cin.tie(NULL);


int main(){
    fastio;

    string s, t, re = "";
    getline(cin, s);
    getline(cin, t);

    for(int i = 0; i < s.length(); i += 1){
        re += s[i];

        if (re.length() >= t.length() && re.substr(re.length() - t.length()) == t)
            re.erase(re.length() - t.length());

    }

    /*
    cach 2
    ll pos;
    while((pos = s.find(t)) != string::npos){
        s.erase(pos, t.length());
    }

    cout << s;
    */

    cout << re;

    return 0;
}
/*
in
hellohell
hell

out
o
*/
