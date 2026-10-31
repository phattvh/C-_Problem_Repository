#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define el "\n"
#define fastio ios_base::sync_with_stdio(false);cin.tie(NULL)

int main(){
    fastio;

    ll n, t, k, x, l;
    vector<ll> v;

    cin >> n >> t;
    for(int i = 0; i < n; i += 1){
        cin >> k;
        v.push_back(k);
    }

    for(int i = 0; i < t; i += 1){
        cin >> k;
        if (k == 1){
            cin >> x >> l;
            v.insert(v.begin() + l, x);
        }
        else if (k == 2){
            cin >> x;
            v.erase(v.begin() + x);
        }
        else {
            cin >> x;
            cout << v[x];
        }
    }

    return 0;
}
/*
in
5 3
1 2 3 4 5
1 8 2
2 4
3 4

out
5

Các loại truy vấn:
1 x k – Thêm số nguyên x vào vị trí k trong vector (vị trí bắt đầu từ 0).
2 k – Xóa phần tử ở vị trí k trong vector.
3 k – In phần tử tại vị trí k trong vector hiện tại.
Input:
- Dòng đầu tiên gồm hai số n và q.
- Dòng thứ hai là n số nguyên dương.
- q dòng tiếp theo, mỗi dòng là 1 loại truy vấn.
Các sốnguyên cách nhau một khoảng trắng, đảm bảo k không vượt quá số lượng phần tử hiện tại.
Output: In phần tử nằm trên một dòng đối với mỗi truy vấn 3.
*/
