#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define el "\n"
#define fastio ios_base::sync_with_stdio(false);cin.tie(NULL)

int main(){
    fastio;

    ll n, k, i = 1;

    cin >> n >> k;
    queue<ll> v;
    for(int i = 1; i <= n; i += 1) v.push(i);

    while(v.size() > 1){
        if (i == k){
            i = 1;
            v.pop();
        }
        else{
            v.push(v.front());
            v.pop();
            i += 1;
        }

    }

    cout << v.front();

    return 0;
}
/*
in
7 3

out
4

gt: Có n người được đánh số từ 1 đến n.
    Từ số 1, ta đếm lần lượt theo chiều kim đồng hồ.
    Người k sẽ bị loại khỏi vòng tròn. Sau đó, tiếp tục đếm từ người kế tiếp (người sau người vừa bị loại),
    và quá trình lặp lại cho đến khi chỉ còn lại một nguoi duy nhất. Hãy xác định so cuối cùng là.
*/
