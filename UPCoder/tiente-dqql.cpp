//Author: Phat Tran
//All my info: https://phattvh.is-not-a.dev


#include<bits/stdc++.h>

using namespace std;

#define ll long long
#define el "\n"

ll tong = 0, a[10000], n, dem = 0;
bool b[10000];
vector<string> v;

void xuat(){
    string s;
    for(int i = 0; i < n; i += 1) if (b[i]) s += "B ";
    else s += "A ";
    v.push_back(s);

}


void quaylui(ll i, ll s){

    if (s < 0) return;

    if (i == n) {
        if (s == 0) xuat();
        return;
    }

    b[i] = false;
    quaylui(i + 1, s);

    b[i] = true;
    quaylui(i + 1, s - a[i]);

    b[i] = false;

}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    cin >> n;
    for(int i = 0; i < n; i += 1) cin >> a[i];

    for(int i = 0; i < n; i += 1) tong += a[i];
    if (tong % 2 != 0) {
        cout << "khong chia duoc";
        return 0;
    }

    quaylui(0, tong / 2);

    if (v.size() == 0) cout << "khong chia duoc";
    else{
        cout << v.size() << el;
        for(vector<string>::iterator it = v.begin(); it != v.end(); it ++) cout << *it << el;
    }

    return 0;
}


/*

Một người mẹ muốn chia đều cho hai đứa con số tiền trong túi của mình.
Khi rút tiền trong túi ra, bà thấy có n đồng tiền (n ≤ 20) với các loại mệnh giá khác nhau.
Bà cảm thấy lo lắng chia cho hai người con có được không.

Yêu cầu: Bạn hãy giúp bà ấy chia tiền cho hai người con. Nếu chia được thì nêu rõ số cách chia.

Dữ liệu vào: Gồm 02 dòng:
+Dòng đầu ghi số n là số đồng tiền (1≤  n ≤ 20)
+Dòng sau ghi mệnh giá các đồng tiền là các số nguyên dương có cùng đơn vị tính (0≤t[i]≤500).

Dữ liệu ra: Dòng thứ nhất ghi số cách chia, nếu không thể chia được thì ghi “ khong chia duoc”.
Các dòng sau trong trường hợp chia được, mỗi dòng là 01 cách chia với quy ước người thứ nhất có tên là “A”,
người thứ hai có tên là “B” và phải tương ứng với thứ tự của các đồng tiền mà bà đưa ra.

input
6
1 2 2 5 10 10
output
4
A A A B A B
A A A B B A
B B B A A B
B B B A B A

input
6
1 2 2 5 10 1
output
khong chia duoc


*/
