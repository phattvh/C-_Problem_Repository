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

    for(int i = 0; i < s.length(); i += 1){
        if (!isupper(s[i])) s[i] = toupper(s[i]);
        else s[i] = tolower(s[i]);
    }

    cout << s;

    return 0;
}
/*
in
Hello World!

out
hEELO wORLD!
*/
