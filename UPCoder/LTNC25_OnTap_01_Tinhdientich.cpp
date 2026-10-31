//Author: Phat Tran
//All my info: https://phattvh.is-not-a.dev
#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define el "\n"
#define fastio ios_base::sync_with_stdio(false);cin.tie(NULL)

int main(){
    fastio;

    double r, a, b;
    cin >> r >> a >> b;
    cout << fixed << setprecision(2) << r * r * 3.14 << el << a * b;

    return 0;
}
/*
in
5.2
12.4 18.75

out
84.91
232.50

*/
