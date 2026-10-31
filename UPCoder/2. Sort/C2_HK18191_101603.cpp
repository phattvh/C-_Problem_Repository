//Author: Phat Tran
//All my info: https://phattvh.is-not-a.dev
#include <bits/stdc++.h>
using namespace std;

#define el "\n"
#define fastio ios_base::sync_with_stdio(false); cin.tie(NULL);

bool asc(char x, char y) {
    return tolower(x) < tolower(y);
}

bool desc(char x, char y) {
    return tolower(x) > tolower(y);
}

int main() {
    fastio;

    char c;
    int n;

    vector<char> a(n);
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }

    if (c == 'A') stable_sort(a.begin(), a.end(), asc);
    else stable_sort(a.begin(), a.end(), desc);

     for (int i = 0; i < n; i++) {
        cout << a[i] << " ";
    }

    return 0;
}
