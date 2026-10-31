//Author: Phat Tran
//All my info: https://phattvh.is-not-a.dev


#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define el "\n"
#define fastio ios_base::sync_with_stdio(false); cin.tie(NULL);

ll n, m, k, xa, xb, ya, yb, maxn = 0;
string a[100][100], t = "NO";

bool check(ll i, ll j){
    if (i < 0 || j < 0 || i >= n || j >= m || a[i][j] == "#") return false;
    return true;
}

void quaylui(ll i, ll j, ll nlcl){

    if (i == xb && j == yb){
        if (maxn < nlcl) {
            maxn = nlcl;
            t = "YES";
        }
        return;
    }

    if (nlcl == 0) return;

    if (a[i][j] != "0") nlcl += stoll(a[i][j]);

    if (check (i + 1, j)) quaylui(i + 1, j, nlcl - 1);
    if (check (i, j + 1)) quaylui(i, j + 1, nlcl - 1);

}

int main() {
    fastio;

    cin >> n >> m >> k >> xa >> ya >> xb >> yb;
    for(int i = 0; i < n; i += 1)
        for(int j = 0; j < m; j += 1) cin >> a[i][j];

    quaylui(xa, ya, k);

    if (maxn != 0) cout << t << el << maxn; else cout << t;

    return 0;
}


/*Cho một ma trận NxM ô, mỗi ô chứa thông tin như sau:

0: ô có thể đi đến
#: ô không thể đi đến
x: được cộng thêm x năng lượng.
-x: bị giảm thêm x năng lượng.
(với x là 1 số nguyên dương từ 1 đến 100)

Một con robot có thể di chuyển theo hướng đi qua phải, hoặc đi xuống (mỗi lần đi một ô).
Ban đầu robot có K năng lượng dùng để di chuyển, mỗi lần di chuyển sang một ô năng lượng sẽ giảm đi 1 (đơn vị).
Nếu năng lượng của robot bằng 0 thì sẽ không di chuyển được.
Yêu cầu là hãy xác định xem robot có thể di chuyển từ vị trí A có thể đến được vị trí B hay không?
Nếu có xuất YES và năng lượng còn lại, ngược lại xuất NO.

Nếu có nhiều phương án, hãy xuất phương án có năng lượng còn lại là lớn nhất.

Input: nhập từ file robot.inp
- Dòng 1: Chứa 3 số N, M và K
- Dòng 2: chứa tọa độ A
- Dòng 3: chứa tọa độ B
- N dòng tiếp theo, mỗi dòng chứ M số (hoặc dấu #) (mỗi số là 1 trong 3 số 0, x, -x hoặc #), mỗi số cách nhau 1 khoảng cách



Output: xuất ra file robot.out
- Xuất NO nếu robot không đến được B ngược lại xuất YES và năng lượng còn lại.
Lưu ý: ma trận được đánh số dòng từ 0 đến N-1, cột từ 0 đến M-1.


Ví dụ:

INPUT

4 4 10
0 0
3 3
0 0 3 0
0 # 0 0
-5 0 0 0
0 0 0 0

OUTPUT
YES
7

Giải thích
Robot cần di chuyển từ ô (0,0) đến ô (3,3) với năng lượng ban đầu là 10.
Robo sẽ di chuyển theo phương án như hình bên dưới, do đi qua ô (0,2) được tăng thêm 3 năng lượng, vì vậy năng lượng còn lại là 7



*/
