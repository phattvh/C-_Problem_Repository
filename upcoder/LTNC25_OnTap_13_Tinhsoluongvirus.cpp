#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define el "\n"
#define fastio ios_base::sync_with_stdio(false);cin.tie(NULL)

ll n;

ll dequy(ll i){
    if (i == 0) return 1;

    return 2 * dequy(i - 1);
}

int main(){
    fastio;

    cin >> n;
    cout << dequy(n);


    return 0;
}
/*
in
3

out
8

Ban đầu có 1 con virus,
cứ 1 phút thì số lượng virus được nhân đôi lên.
So luong virus sau 3 phut la 8 con
*/
