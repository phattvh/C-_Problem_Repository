//Author: Phat Tran
//All my info: https://phattvh.is-not-a.dev
#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define el "\n"
#define fastio ios_base::sync_with_stdio(false);cin.tie(NULL);

string s;
vector<string> v, a;
ll sgcnt = 0;
ll spcnt = 0;
ll tncnt = 0;

string chuanhoa(string s) {
    string res = "";
    for(char c : s) {
        if(c != ' ') {
            res += toupper(c);
        }
    }
    return res;
}

int main(){
    fastio;

    //freopen("upcoder.inp", "r", stdin);
    //freopen("upcoder.out", "w", stdout);

    while(cin >> s){
        v.push_back(s);
    }

    for(int i = 0; i < v.size(); i += 1){
        stringstream ss(v[i]);
        string word;
        ll dem = 0;
        while(getline(ss, word, ';')){
            ++dem;
            if (dem == 3){
                string tc = chuanhoa(word);

                if (tc == "SAIGON") sgcnt++;
                else if (tc == "SUPHAM") spcnt++;
                else if (tc == "TUNHIEN") tncnt++;
            }
        }
    }

    /*for(int i = 0; i < a.size(); i += 1){
        string tc = chuanhoa(a[i]);

        auto it = find(k.begin(), k.end(), tc);

        if (it != k.end()){
            int id = distance(k.begin(), it);
            d[id]++;
        } else{
            k.push_back(tc);
            d.push_back(1);
        }
    }
    for(int i = 0; i < k.size(); i++) cout << k[i] << ": " << d[i] << el;*/

    if (sgcnt > 0) cout << "SAIGON:" << sgcnt << el;
    if (spcnt > 0) cout << "SUPHAM:" << spcnt << el;
    if (tncnt > 0) cout << "TUNHIEN:" << tncnt << el;

    return 0;
}
