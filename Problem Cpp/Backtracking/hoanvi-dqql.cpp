#include<bits/stdc++.h>

using namespace std;

#define ll long long
#define el "\n"
#define forn(i,n,k) for(ll i = n; i < l; i += 1)


ll a[10000], n;
bool b[10000];

void fastio(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
}

void luumang(){
    for(int i = 1; i <= n; i += 1) cout << a[i];
    cout << el;
}

void hoanvi(ll i){
    for(int j = 1; j <= n; j += 1){
        if (b[j] == false){
            a[i] = j;
            b[j] = true;
            if (i == n) luumang();
             else hoanvi(i + 1);
            b[j] = false;
        }
    }
}



int main(){
    fastio();

    memset(b, false, sizeof(b));

    cin >> n;
    hoanvi(1);


    return 0;
}

/*
Cho số nguyên dương n (n nhỏ). Hãy liệt kê tất cả các hoán vị của tập hợp \(\{1, 2, ..., n\}\).
Mỗi hoán vị được in trên một dòng, các phần tử trong hoán vị viết liền nhau.

input
3

output
123
132
213
231
312
321
*/
