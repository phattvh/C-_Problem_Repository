//Author: Phat Tran
//All my info: https://phattvh.is-not-a.dev


#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define el "\n"
#define fastio ios_base::sync_with_stdio(false); cin.tie(NULL);

string s, t;
map<char, int> mp;

int main(){
    fastio;

    cin >> s;

    for(int i = 0; i < s.length(); i += 1) mp[s[i]] += 1;

    ll maxn = 0;
    char dm;

    for (auto x : mp) {
        if (x.second > maxn) {
            maxn = x.second;
            dm = x.first;
        }
    }

    cout << dm << " " << maxn;

    return 0;
}

/*
in
aAbBcCaA

out
A 2

giaithich: Nếu có nhiều ký tự xuất hiện cùng số lần lớn nhất, chọn ký tự có mã ASCII nhỏ nhất
*/

