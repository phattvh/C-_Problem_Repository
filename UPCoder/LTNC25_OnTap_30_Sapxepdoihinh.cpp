//Author: Phat Tran
//All my info: https://phattvh.is-not-a.dev


#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define el "\n"
#define fastio ios_base::sync_with_stdio(false);cin.tie(NULL)

ll n, r[100];
bool c[100] = {false};

void xuat(){
    for(int i = 0; i < n; i += 1) cout << r[i] << " ";
    cout << el;
}

void quaylui(ll i){
    if (i == n){
        xuat();
        return;
    }

    for(int j = 1; j <= n; j += 1){
        if (c[j] == false){
            c[j] = true;
            r[i] = j;
            quaylui(i + 1);
            c[j] = false;
        }
    }

}

int main(){
    fastio;

    cin >> n;

    quaylui(0);


    return 0;
}
/*
in
3

out
1 2 3
1 3 2
2 1 3
2 3 1
3 1 2
3 2 1
*/
