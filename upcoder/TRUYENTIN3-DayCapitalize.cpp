#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define el "\n"
#define fastio ios_base::sync_with_stdio(false);cin.tie(NULL)

int main(){
    fastio;

    vector<ll> v;

    ll n;
    cin >> n;
    cin.ignore();
    string s;
    for(int i = 0; i < n; i += 1){
        cin >> s;
        cout << s[0];
        for(int i = 1; i < s.length(); i += 1) {
            if (isupper(s[i])) cout << ' ' << s[i];
            else cout << s[i];
        }
        cout << el;
    }



    return 0;
}
/*
in
3
TranLeTrieuDuong
CaoVoTuanKiet
VoNguyenMinhHoang

out
Tran Le Trieu Duong
Cao Vo Tuan Kiet
Vo Nguyen Minh Hoang
*/
