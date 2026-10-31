//Author: Phat Tran
//All my info: https://phattvh.is-not-a.dev


#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define el "\n"
#define fastio ios_base::sync_with_stdio(false);cin.tie(NULL)


int main(){
    fastio;

    vector<string> v;
    string s;

    while(cin >> s){
        v.push_back(s);
    }

    s = "";
    for(int i = 0; i < v.size(); i += 1) s = s + v[i];

    for(int i = 0; i < s.length(); i += 1){
        s[i] = tolower(s[i]);
    }

    for(int i = 0; i < s.length() / 2; i += 1) if (s[i] != s[s.length() - 1 - i]){
        cout << "NO";
        return 0;
    }

    cout << "YES";

    return 0;
}
/*
in
A man a plan a canal Panama

out
YES
*/
