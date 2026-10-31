#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define el "\n"
#define fastio ios_base::sync_with_stdio(false);cin.tie(NULL)

bool ssc(ll a, ll b) {
    return abs(a) < abs(b);
}

bool ssl(ll a, ll b) {
    return abs(a) > abs(b);
}

int main(){
    fastio;

    vector<ll> chan;
    vector<ll> le;

    ll n;
    cin >> n;
    cin.ignore();
    string s;
    for(int i = 0; i < n; i += 1){
        getline(cin, s);
        stringstream ss(s);
        ll t;
        while(ss >> t){
            if (t % 2 == 0) chan.push_back(t);
            else le.push_back(t);
        }
        sort(chan.begin(), chan.end(), ssc);
        sort(le.begin(), le.end(), ssl);

        for(int i = 0; i < chan.size(); i += 1) cout << chan[i] << " ";
        for(int i = 0; i < le.size(); i += 1) cout << le[i] << " ";
        cout << el;

        chan.clear();
        le.clear();
    }



    return 0;
}
/*
in
3
7 9 -2 8 -4 10
9 -1 3 4
7 10 -13

out
-2 -4 8 10 9 7
4 9 3 -1
10 -13 7

Tỷ cần sắp xếp và lọc lại một số dữ liệu,
Tỷ có một dãy số nguyên và muốn biển đối cho dãy số đó có các số chẵn tăng dần theo giá trị tuyệt đối,
sau đó là số lẻ giảm dần theo giá trị tuyệt đối.
*/
