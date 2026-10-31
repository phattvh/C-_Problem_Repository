//Author: Phat Tran
//All my info: https://phattvh.is-not-a.dev
#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define el "\n"
#define fastio ios_base::sync_with_stdio(false);cin.tie(NULL)

int main(){
    fastio;

    ll n, m, a[1000], b[1000], dem = 0;

    cin >> n >> m;
    for(int i = 0; i < n; i += 1) cin >> a[i];
    for(int i = 0; i < m; i += 1) cin >> b[i];

    for(int i = 0; i < m; i += 1) if (find(a, a + n, b[i]) == a + n) dem += 1;

    cout << dem;


    return 0;
}
/*
in
4 6
101 102 103 104
100 101 105 106 103 108

out
4

gt: xác định bao nhiêu tín hiệu thu được là không hợp lệ, tức là không nằm trong danh sách các tín hiệu cho phép
    n số nguyên là mã của các tín hiệu hợp lệ.
    m số nguyên là mã của các tín hiệu thu được trong phiên truyền tải.
    o testcase mau la 100 105 106 108 -> 4
*/
