//Author: Phat Tran
//All my info: https://phattvh.is-not-a.dev


//subset-sum
#include<bits/stdc++.h>

using namespace std;

#define ll long long
#define el "\n"

ll n = 0, a[1000], k;
bool b[1000];

void xuat(){
    for(int i = 0; i < n; i += 1) if (b[i]) cout << a[i] << " ";
    cout << el;
    return;
}

void quaylui(ll i, ll Scl){
    if (Scl == 0){
        xuat();
        return;
    }

    if (i == n || Scl < 0) {
        return;
    }

    b[i] = false;
    quaylui(i + 1, Scl);

    b[i] = true;
    quaylui(i + 1, Scl - a[i]);
    b[i] = false;
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);


    cin >> n >> k;
    for(int i = 0; i < n; i += 1) cin >> a[i];

    memset(b, false, sizeof(b));

    quaylui(0, k);

    return 0;
}
/*
in
5 9 (9 là tổng mục tiêu)
3 4 5 2 12
out
4 5
3 4 2
Input: Một mảng các số nguyên dương A = a1, a2,... , an
và một số nguyên dương mục tiêu S (sum).
Output: Trả về true (hoặc Yes)
nếu tồn tại một tập con của A có tổng bằng S, ngược lại trả về false (hoặc No)
*/
