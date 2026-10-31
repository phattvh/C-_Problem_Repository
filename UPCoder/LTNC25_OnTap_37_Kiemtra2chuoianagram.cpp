//Author: Phat Tran
//All my info: https://phattvh.is-not-a.dev


#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define el "\n"
#define fastio ios_base::sync_with_stdio(false); cin.tie(NULL);

string s, t;
vector<char> v;

int main(){
    fastio;

    cin >> s >> t;

    if (t.length() != s.length()){
        cout << "NO";
        return 0;
    }

    sort(s.begin(), s.end());
    sort(t.begin(), t.end());

    if (s == t) cout << "YES"; else cout << "NO";





    return 0;
}

/*
in
listen
silent

out
YES

giaithich: 2 chuoi cung co chung so ky tu, chi khac cach xep
*/

