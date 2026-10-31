//Author: Phat Tran
//All my info: https://phattvh.is-not-a.dev
#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define el "\n"
#define fastio ios_base::sync_with_stdio(false);cin.tie(NULL)

ll n;
double laisuat = 0.07;

double dequy(ll i){
    if (i == 0) return 1.0;

    return (1.0 + laisuat) * dequy (i - 1);
}

int main(){
    fastio;

    cin >> n;
    cout << fixed << setprecision(2) << dequy(n);


    return 0;
}
/*
in
10

out
1.97

Biết lãi suất của ngân hàng là 7%/năm.
Ban đầu gửi 1 triệu đồng, sau 10 năm thì được 1.97 (cả vốn lẫn lãi)
*/
