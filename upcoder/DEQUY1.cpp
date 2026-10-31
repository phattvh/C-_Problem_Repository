#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define el "\n"
#define fastio ios_base::sync_with_stdio(false); cin.tie(NULL);

ll a[1000], n, m;
vector<string> v;

void xuat(){
    string s;
    for(ll i = 0; i < n; i += 1){
        s += to_string(a[i]);
    }
    v.push_back(s);
}

void quaylui(ll i){
    if (i == n) {
        xuat();
        return;
    }

    for(int j = 1; j <= m; j += 1){
        a[i] = j;
        quaylui(i + 1);
    }
}

int main(){
    fastio;

    cin >> m >> n;

    quaylui(0);

    cout << v.size() << el;
    for(vector<string>::iterator it = v.begin(); it != v.end(); it ++) cout << *it << el;

    return 0;

}
