#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define el "\n"
#define fastio ios_base::sync_with_stdio(false); cin.tie(NULL);

int dh[8] = {-2, -1, -2, -1, +1, +2, +2, +1},
    dc[8] = {-1, -2, +1, +2, -2, -1, +1, +2},
    a[100][100], n;

bool check(ll i, ll j){
    if (i < 0 || j < 0 || i >= n || j >= n || a[i][j] != 0) return false;
    return true;
}

void xuat(){
    for(int i = 0; i < n; i += 1){
        for(int j = 0; j < n; j += 1) cout << a[i][j] << " ";
        cout << el;
    }

}

void quaylui(ll h, ll c, ll buoc){
    a[h][c] = buoc;

    if (buoc == n * n) {
        xuat();
        return;
    }

    for(int i = 0; i < 8; i += 1){
        ll hm = h + dh[i],
           cm = c + dc[i];
        if (check(hm, cm)) quaylui(hm, cm, buoc + 1);
    }

    a[h][c] = 0;
}

int main(){
    fastio;

    cin >> n;
    memset(a, 0, sizeof(a));

    quaylui(0, 0, 1);


    return 0;
}


/*
Bài toán "Mã đi tuần" (Knight's Tour)
yêu cầu một quân mã di chuyển trên bàn cờ kích thước n x n
sao cho nó đi qua tất cả các ô, mỗi ô đúng một lần.

in
5

out
1 6 15 10 21
14 9 20 5 16
19 2 7 22 11
8 13 24 17 4
25 18 3 12 23

*/

