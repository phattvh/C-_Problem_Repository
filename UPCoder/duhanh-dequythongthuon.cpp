//Author: Phat Tran
//All my info: https://phattvh.is-not-a.dev
#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define el "\n"

ll a[100][100], n, m, kyluc = 0;

ll demsoo(ll i, ll j, string huong, int nhip){

    if (i < 0 || j < 0 || i >= n || j >= m || a[i][j] == 0) return 0;

    if (huong == "len"){
        if (nhip == 1) return 1 + demsoo(i - 1, j, "len", 2);
        else return 1 + demsoo(i, j + 1, "len", 1);
    }

    if (huong == "phai"){
        if (nhip == 1) return 1 + demsoo(i, j + 1, "phai", 2);
        else return 1 + demsoo(i + 1, j, "phai", 1);
    }

    if (huong == "xuong"){
        if (nhip == 1) return 1 + demsoo(i + 1, j, "xuong", 2);
        else return 1 + demsoo(i, j - 1, "xuong", 1);
    }

    if (huong == "trai"){
        if (nhip == 1) return 1 + demsoo(i, j - 1, "trai", 2);
        else return 1 + demsoo(i - 1, j, "trai", 1);
    }

    return 0;
}


int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    cin >> n >> m;
    for(int i = 0; i < n; i += 1){
        string hang;
        cin >> hang;
        for(int j = 0; j < m; j += 1) a[i][j] = hang[j] - '0';
    }

    for(int i = 0; i < n; i += 1)
        for(int j = 0; j < m; j += 1) if (a[i][j] == 1){
            ll tam = 1;
            tam += demsoo(i - 1, j, "len", 2);
            tam += demsoo(i + 1, j, "xuong", 2);
            tam += demsoo(i, j - 1, "trai", 2);
            tam += demsoo(i, j + 1, "phai", 2);
            if (tam > kyluc) {
                kyluc = tam;
            }
        }


    cout << kyluc;



    return 0;
}




/*

Alpha Centauri-M (ACM) là một hành tinh với rất nhiều cảnh đẹp cho du khách từ Trái đất. Bản đồ của ACM được chia thành một lưới gồm M dòng, N cột. Các cột được đánh số từ 1 đến N theo chiều từ trái sang phải. Các dòng được đánh số từ 1 đến M theo chiều từ trên xuống dưới. Có một vài ô của lưới là núi lửa nên không thể viếng thăm được.  Các ô còn lại gọi là ô an toàn.

      Khi tiến đến ACM, phi thuyền sẽ hạ cánh tại một ô an toàn nào đó. Sau đó du khách sẽ viếng thăm hành tinh bằng xe tự hành. Bắt đầu từ ô hạ cánh (r0, c0), xe tự hành có thể đi đến bốn ô lân cận là (r0-1, c0), (r0+1, c0), (r0, c0-1), (r0, c0+1). Sau đó xe tự hành sẽ tiếp tục di chuyển theo quy tắc sau:

       1. Quẹo phải và tiến đến 1 ô.
       2. Quẹo trái và tiến đến 1 ô.
       3. Thực hiện lại bước 1.

      Xe tự hành chỉ có thể viếng thăm ô an toàn, vì vậy nó sẽ dừng lại nếu ô kế tiếp là không an toàn hoặc đi ra ngoài bản đồ. Hình bên dưới minh họa một bản đồ gồm M= 6 dòng và N= 7 cột. Từ ô hạ cánh là ô (4, 3), bạn có thể viếng thăm 16 ô, kể cả ô hạ cánh.



     Nhiệm vụ của bạn là tìm ô hạ cánh sao cho có thể viếng thăm nhiều ô nhất của Alpha Centauri-M
.
Dữ liệu nhập:
- Dòng đầu tiên là hai số nguyên M, N cách nhau một khoảng trắng (1 ≤ M, N ≤ 15).
- Trong M dòng tiếp theo, mỗi dòng chứa các số 0, 1 thể hiện tình trạng bản đồ (1 là ô an toàn, 0 là ô không an toàn), các số xếp sát nhau.

Dữ liệu xuất:
- Là số nguyên xác định số lượng ô có thể thăm nhiều nhất.

Ví dụ
input
3 3
011
111
111
output
8

input
6 7
1101011
0111111
1111101
1111111
1111110
0111111
output
20


CACH THONG THUONG

ll demsoo(ll i, ll j, string huong){
    ll dem = 0;

    if (huong == "len")
        while (true){
            j += 1;
            if (j < m && a[i][j] == 1) dem += 1;
                else break;
            i -= 1;
            if (0 <= i && a[i][j] == 1) dem += 1;
                else break;
        }

    if (huong == "phai")
        while (true){
            i += 1;
            if (i < n && a[i][j] == 1) dem += 1;
                else break;
            j += 1;
            if (j < m && a[i][j] == 1) dem += 1;
                else break;
        }

    if (huong == "xuong")
        while (true){
            j -= 1;
            if (0 <= j && a[i][j] == 1) dem += 1;
                else break;
            i += 1;
            if (i < n && a[i][j] == 1) dem += 1;
                else break;
        }

    if (huong == "trai")
        while (true){
            i -= 1;
            if (0 <= i && a[i][j] == 1) dem += 1;
                else break;
            j -= 1;
            if (0 <= j && a[i][j] == 1) dem += 1;
                else break;
        }

    return dem;
}


int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    cin >> n >> m;
    for(int i = 0; i < n; i += 1)
        for(int j = 0; j < m; j += 1) cin >> a[i][j];

    for(int i = 0; i < n; i += 1)
        for(int j = 0; j < m; j += 1) if (a[i][j] == 1){
            ll tam = 0;
            tam += demsoo(i, j, "len");
            tam += demsoo(i, j, "xuong");
            tam += demsoo(i, j, "trai");
            tam += demsoo(i, j, "phai");
            if (tam > kyluc) {
                kyluc = tam;
            }
        }


    cout << kyluc + 1;



    return 0;
}

*/
