//Author: Phat Tran
//All my info: https://phattvh.is-not-a.dev
#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define el "\n"
#define fastio ios_base::sync_with_stdio(false); cin.tie(nullptr);

void chuyenCoSo(long long soHe10, int heCoSoMoi = 0) {
    int base = 2;
    
    if (heCoSoMoi == 1) base = 8; 
    else if (heCoSoMoi == 2) base = 16;

    if (soHe10 == 0) {
        cout << 0 << el;
        return;
    }

    stack<int> s;
    long long temp = soHe10;

    while (temp > 0) {
        s.push(temp % base);
        temp /= base;
    }

    char hexChars[] = "0123456789ABCDEF";

    while (!s.empty()) {
        int remainder = s.top();
        s.pop();
        cout << hexChars[remainder];
    }
}

int main() {
	fastio;

    ll n, mode;

    cin >> n >> mode;
    chuyenCoSo(n, mode);

    return 0;
}
