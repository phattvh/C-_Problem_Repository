//Author: Phat Tran
//All my info: https://phattvh.is-not-a.dev


#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define el "\n"

ll n, a[100][100];

bool kiemtra(ll i, ll j){
    for(int k = i; k >= 0; k -= 1) if (a[k][j] == 1) return false;

    ll r = i - 1, c = j - 1;
    while(r >= 0 && c >= 0){
        if (a[r][c] == 1) return false;
        r -= 1;
        c -= 1;
    }

    r = i - 1, c = j + 1;
    while(r >= 0 && c < n){
        if (a[r][c] == 1) return false;
        r -= 1;
        c += 1;
    }

    return true;
}

void xuat(){
    for(int i = 0; i < n; i += 1){
        for(int j = 0; j < n; j += 1) if (a[i][j] == 1) cout << "Q "; else cout << ". ";
        cout << el;
    }
    cout << el;
}

void quaylui(ll i){
    if (i == n) {
        xuat();
        return;
    }
    for(int k = 0; k < n; k += 1) if (kiemtra(i, k)) {
        a[i][k] = 1;
        quaylui(i + 1);
        a[i][k] = 0;
    }
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);


    cin >> n;
    memset(a, 0, sizeof(a));

    quaylui(0);



    return 0;
}

/*
Cho một bàn cờ vua hình vuông kích thước n × n. Hãy đặt n quân hậu lên bàn cờ sao cho không có hai quân hậu nào tấn công nhau.
Theo luật cờ vua, hai quân hậu tấn công nhau nếu chúng nằm cùng hàng, cùng cột hoặc cùng đường chéo

input
4

output
. Q . .
. . . Q
Q . . .
. . Q .

. . Q .
Q . . .
. . . Q
. Q . .

*/.
