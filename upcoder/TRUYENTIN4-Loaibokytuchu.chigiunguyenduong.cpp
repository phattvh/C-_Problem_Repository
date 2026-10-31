#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define el "\n"
#define fastio ios_base::sync_with_stdio(false);cin.tie(NULL)

int main(){
    fastio;

    ll n;
    cin >> n;
    cin.ignore();
    string s;

    for(int i = 0; i < n; i += 1){
        getline(cin, s);
        for(int j = 0; j < s.length(); j += 1) if (s[j] < '0' || s[j] > '9') s[j] = ' ';
        stringstream ss(s);
        string word;
        while(ss >> word) cout << word << " ";
        cout << el;
    }



    return 0;
}
/*
in
2
 !sss94xc   ?227ff   #11x gx
]’;.@443a ca   $$80(  ))8001+

out
94 227 11
443 80 8001
*/
