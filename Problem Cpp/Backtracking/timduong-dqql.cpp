#include<bits/stdc++.h>

using namespace std;

#define ll long long
#define el "\n"

ll n, a[10000][10000];

void timduong(ll i, ll j, string path){
    if (i < n && i >= 0 && j < n && j >= 0 && a[i][j] == 1){
        if (i == n - 1 && j == n - 1) {
            cout << path << el;
        }
        else {
            timduong(i + 1, j, path + 'D');
            timduong(i, j + 1, path + 'R');
        }

    }

}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);


    cin >> n;

    for(int i = 0; i < n; i += 1)
        for(int j = 0; j < n; j += 1) cin >> a[i][j];

    timduong(0, 0, "");

    return 0;
}

/*
input
4
1 0 0 0
1 1 0 1
0 1 0 0
1 1 1 1

output
DRDDRR
*/
