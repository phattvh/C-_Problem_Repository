//Author: Phat Tran
//All my info: https://phattvh.is-not-a.dev


#include<bits/stdc++.h>

using namespace std;

#define ll long long
#define el "\n"

ll n, a[10][10];

bool kt(ll h, ll c, ll num){
    for(int i = 0; i < 9; i += 1) if (a[h][i] == num) return false;
    for(int i = 0; i < 9; i += 1) if (a[i][c] == num) return false;

    ll hang = h / 3 * 3, cot  = c / 3 * 3;
    for(int i = hang; i < hang + 3; i += 1)
        for(int j = cot; j < cot + 3; j += 1) if (a[i][j] == num) return false;

    return true;
}

void xuat(){
    for(int i = 0; i < 9; i += 1){
        for(int j = 0; j < 9; j += 1) cout << a[i][j] << " ";
        cout << el;
    }
}

void quaylui(ll r, ll c){
    if (c == 9) {
        xuat();
        exit(0);
    }

    ll next_r = r + 1;
    ll next_c = c;
    if (next_r == 9){
        next_r = 0;
        next_c = c + 1;
    }

    if (a[r][c] == 0){
        for(int i = 1; i < 10; i += 1) if (kt(r, c, i)){
            a[r][c] = i;
            quaylui(next_r, next_c);
        }
        a[r][c] = 0;
    } else quaylui(next_r, next_c);

}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    for(int i = 0; i < 9; i += 1)
        for(int j = 0; j < 9; j += 1) cin >> a[i][j];

    quaylui(0,0);

    return 0;
}

/*
Cho một bảng số Sudoku kích thước 9 × 9 bị khuyết một số ô (các ô trống được ký hiệu bằng số 0).
Hãy điền các số từ 1 đến 9 vào các ô trống sao cho bảng số thỏa mãn luật chơi Sudoku:
    Mỗi hàng ngang phải chứa đủ các số từ 1 đến 9, không trùng lặp.
    Mỗi cột dọc phải chứa đủ các số từ 1 đến 9, không trùng lặp.
    Mỗi khối vuông nhỏ 3 × 3 (có 9 khối như vậy trên bàn cờ) phải chứa đủ các số từ 1 đến 9, không trùng lặp.

input
5 3 0 0 7 0 0 0 0
6 0 0 1 9 5 0 0 0
0 9 8 0 0 0 0 6 0
8 0 0 0 6 0 0 0 3
4 0 0 8 0 3 0 0 1
7 0 0 0 2 0 0 0 6
0 6 0 0 0 0 2 8 0
0 0 0 4 1 9 0 0 5
0 0 0 0 8 0 0 7 9

output
5 3 4 6 7 8 9 1 2
6 7 2 1 9 5 3 4 8
1 9 8 3 4 2 5 6 7
8 5 9 4 6 1 4 2 3
4 2 6 8 5 3 7 9 1
7 1 3 9 2 5 8 4 6
9 6 1 5 3 7 2 8 4
2 8 7 4 1 9 6 3 5
3 4 5 2 8 6 1 7 9
*/
