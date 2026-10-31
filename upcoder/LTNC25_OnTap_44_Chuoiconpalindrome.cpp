#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define el "\n"
#define fastio ios_base::sync_with_stdio(false); cin.tie(NULL);

ll dem = 0;
string s;

bool checkpalin(string s){
    int n = s.length();
    for(int i = 0; i < n; i += 1)
        if (s[i] != s[s.length() - 1 - i]) return false;
    return true;
}

int main(){
    fastio;

    cin >> s;

    for(int i = 0; i < s.length(); i += 1)
        for(int j = i; j < s.length(); j += 1) if (checkpalin(s.substr(i, j - i + 1))) dem += 1;

    cout << dem;


    return 0;
}

/*
in
aaa

out
6

giai: a a a aa aa aaa = 6
*/
