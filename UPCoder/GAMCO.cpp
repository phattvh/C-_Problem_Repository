//Author: Phat Tran
//All my info: https://phattvh.is-not-a.dev


#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define el "\n"
#define fastio ios_base::sync_with_stdio(false); cin.tie(NULL);

ll n, m, t = 10000, sti, stj;
string a[100][100], s;
bool vst[100][100];

bool check(ll i, ll j){
    if (i < 0 || j < 0 || i >= n || j >= m || a[i][j] == "*" || vst[i][j]) return false;
    return true;
}

void quaylui(ll i, ll j, ll dem){
    if (dem >= t) return;

    if (i == 0 && j == 0) {
        if (dem < t) t = dem;
        return;
    }

    if (check(i - 1, j)) {
        vst[i - 1][j] = true;
        quaylui(i - 1, j, dem + 1);
        vst[i - 1][j] = false;
    }
    if (check(i, j - 1)) {
        vst[i][j - 1] = true;
        quaylui(i, j - 1, dem + 1);
        vst[i][j - 1] = false;
    }
    if (check(i + 1, j)) {
        vst[i + 1][j] = true;
        quaylui(i + 1, j, dem + 1);
        vst[i + 1][j] = false;
    }
    if (check(i, j + 1)) {
        vst[i][j + 1] = true;
        quaylui(i, j + 1, dem + 1);
        vst[i][j + 1] = false;
    }

}


int main(){
    fastio;
    cin >> n >> m;
    for(int i = 0; i < n; i += 1){
        cin >> s;
        for(int j = 0; j < m; j += 1) {
            a[i][j] = s[j];
            if (a[i][j] == "C") {
                sti = i;
                stj = j;
            }
        }
    }

    vst[sti][stj] = true;

    quaylui(sti, stj, 0);

    cout << t;

    return 0;
}

/*
5 6
B...*.
..*...
.**.*.
..***.
*..*.C
*/
