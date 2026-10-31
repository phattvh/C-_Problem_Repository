//Author: Phat Tran
//All my info: https://phattvh.is-not-a.dev

#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define el "\n"
#define fastio ios_base::sync_with_stdio(false); cin.tie(NULL);

string s;
ll dem = 0;

int main(){
    fastio;

    getline(cin, s);

    for(int i = 0; i < s.length(); i += 1) if ((s[i] < 'A' || s[i] > 'Z') && (s[i] < 'a' || s[i] > 'z')) s[i] = ' ';

    stringstream ss(s);
    string word;

    while(ss >> word) {
        dem += 1;
    }

    cout << dem;

    return 0;
}
/*
in
Hello HCMUE!

out
2
*/
