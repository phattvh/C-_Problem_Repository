//Author: Phat Tran
//All my info: https://phattvh.is-not-a.dev
#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define el "\n"
#define fastio ios_base::sync_with_stdio(false);cin.tie(NULL)

ll npsangtp(string n){
    ll dec = 0, coso = 1;

    for (ll i = n.length() - 1; i >= 0; i--) {
        if (n[i] == '1') {
            dec += coso;
        }
        coso *= 2;
    }

    return dec;
}

int main(){
    fastio;

    ll n;
    cin >> n;
    cin.ignore();
    string s;
    for(int i = 0; i < n; i += 1){
        cin >> s;
        string k = "";
        stringstream ss(s);
        string word;
        while(getline(ss, word, '.')){
            k = k + to_string(npsangtp(word));
            k = k + '.';
        }
        k.erase(k.length() - 1, 1);
        cout << k << el;
    }



    return 0;
}
/*
in
3
01010001.00110101.10011010.11111101
11111011.10101101.01111110.11000010
10000011.11000110.00101010.10110000

out
81.53.154.253
251.173.126.194
131.198.42.176

Tỷ cần sắp xếp và lọc lại một số dữ liệu,
Tỷ có một dãy số nguyên và muốn biển đối cho dãy số đó có các số chẵn tăng dần theo giá trị tuyệt đối,
sau đó là số lẻ giảm dần theo giá trị tuyệt đối.
*/
