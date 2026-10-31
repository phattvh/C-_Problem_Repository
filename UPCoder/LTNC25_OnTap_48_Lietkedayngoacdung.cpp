//Author: Phat Tran
//All my info: https://phattvh.is-not-a.dev


#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define el "\n"
#define fastio ios_base::sync_with_stdio(false); cin.tie(NULL);

ll n;
string s;

void quaylui(ll nt, ll np, string path){
    if (nt == n && nt == np){
        cout << path << el;
        return;
    }

    if (nt < n) quaylui(nt + 1, np, path + "(");
    if (np < nt) quaylui(nt, np + 1, path + ")");
}

int main(){
    fastio;

    cin >> n;

    quaylui(0, 0, s);

    return 0;
}
/*
in
3

out
((()))
(()())
(())()
()(())
()()()

de
Cho một số nguyên dương n, hãy liệt kê tất cả các dãy ngoặc đúng gồm n cặp dấu ngoặc
tròn “(“ và “)”. Dãy ngoặc đúng là dãy thỏa mãn:
- Số dấu “(” bằng số dấu “)”.
- Tại mọi vị trí trong dãy, số dấu “(” từ đầu đến vị trí đó không nhỏ hơn số dấu “)”.
*/
