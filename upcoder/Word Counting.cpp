#include<bits/stdc++.h>
using namespace std;

#define ll long long
#define el "\n"
#define fastio ios_base::sync_with_stdio(false); cin.tie(NULL);

int main(){
    fastio;

    ll n;
    string s[10000], word;


    cin >> n;
    cin.ignore();
    for(int i = 0; i < n; i += 1) getline(cin, s[i]);

    for(int i = 0; i < n; i += 1){
        for(int j = 0; j < s.length(); j++) if(s[j] < 'a' || s[j] > 'z') s[j] = ' ';

        stringstream ss(s[i]);

        vector<ll> v;
        while(ss >> word){
            v.push_back(word.length());
        }


        ll j = 0, dem = 1, kl = 1;
        while (j < v.size() - 1){
            if (v[j] == v[j + 1]) dem ++;
            else dem = 1;
            kl = max(kl, dem);
            j += 1;
        }
        cout << kl << el;
    }



    return 0;
}
/*
cin
2
a aa bb cc def ghi
a a a a a bb bb bb bb c c

cout
3
5
*/
