//Author: Phat Tran
//All my info: https://phattvh.is-not-a.dev


#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define el "\n"
#define fastio ios_base::sync_with_stdio(false); cin.tie(NULL);

ll m, n, a[100][100], dem = 0;
bool b[100][100];

bool kt(ll hang, ll cot){
    if (hang < 0 || cot < 0) return false;
    if (hang >= n || cot >= m) return false;
    if (a[hang][cot] == 0) return false;
    if (b[hang][cot] == true) return false;
    return true;
}

void quaylui (ll h, ll c){
    if (kt(h, c) == false) return;

    if (h == n - 1 && c == m - 1) {
        dem += 1;
        return;
    }

    b[h][c] = true;

    quaylui(h + 1, c);
    quaylui(h, c + 1);
    quaylui(h - 1, c);
    quaylui(h, c - 1);

    b[h][c] = false;

}


int main(){
    fastio;

    memset(b, false, sizeof(b));
    cin >> n >> m;
    for(int i = 0; i < n; i += 1)
        for(int j = 0; j < m; j += 1) cin >> a[i][j];

    quaylui(0, 0);

    cout << dem;

    return 0;
}

/*
Mô tả:
Bạn được cấp một bản đồ kích thước $N \times M$.
Ô 1 là đất liền an toàn. Ô 0 là núi lửa (không thể đi vào).
Chiếc xe tự hành xuất phát từ góc trên cùng bên trái ở tọa độ (0, 0) và
cần tìm đường đi đến trạm sạc ở góc dưới cùng bên phải ở tọa độ (N-1, M-1).
Tại mỗi bước, xe có thể di chuyển sang 1 trong 4 ô lân cận (Lên, Xuống, Trái, Phải).

Yêu cầu:
Thay vì chỉ tìm 1 đường, bạn hãy dùng thuật toán Quay lui
để đếm xem có tổng cộng bao nhiêu con đường khác nhau đi từ (0, 0) đến (N-1, M-1).

Input:
3 3
111
101
111

Output: 2

Input:
2 2
10
01

Output: 0



*/
