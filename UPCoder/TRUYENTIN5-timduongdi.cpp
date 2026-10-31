//Author: Phat Tran
//All my info: https://phattvh.is-not-a.dev
#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define el "\n"
#define fastio ios_base::sync_with_stdio(false);cin.tie(NULL)

ll n, m, x, y;
string s;
char a[100][100];
bool vst[100][100];

void xuat(vector<pair<int,int>> path){
    cout << "THANH CONG" << el;
    for(int i = 0; i < path.size(); i += 1)
        cout << "(" << path[i].first << ", " << path[i].second << ")" << el;
}

bool check(ll i, ll j, ll k){
    if (i < 0 || j < 0 || i >= n || j >= m) return false;
    if (a[i][j] != s[k]) return false;
    if (vst[i][j]) return false;
    return true;
}

void quaylui(ll i, ll j, ll k, vector<pair<int,int>> &path){
    if (k == s.length()){
        xuat(path);
        exit(0);
    }

    if (check(i, j, k) == false) return;

    vst[i][j] = true;
    path.push_back({i, j});

    quaylui(i + 1, j, k + 1, path);
    quaylui(i - 1, j, k + 1, path);
    quaylui(i, j + 1, k + 1, path);
    quaylui(i, j - 1, k + 1, path);

    vst[i][j] = false;
    path.pop_back();
}

int main(){
    fastio;

    vector<pair<int,int>> p;
    cin >> n >> m >> x >> y >> s;

    for(int i = 0; i < n; i += 1)
        for(int j = 0; j < m; j += 1) cin >> a[i][j];

    memset(vst, false, sizeof(vst));

    quaylui(x, y, 0, p);

    cout << "THAT BAI";


    return 0;
}
/*
in
4 4 0 0
SUPHAM
S U C D
E P H H
K C A K
Z Y M L

out
THANH CONG
(0, 0)
(0, 1)
(1, 1)
(1, 2)
(2, 2)
(3, 2)
*/
