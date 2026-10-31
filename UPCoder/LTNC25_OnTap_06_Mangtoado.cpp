//Author: Phat Tran
//All my info: https://phattvh.is-not-a.dev


#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define el "\n"
#define fastio ios_base::sync_with_stdio(false);cin.tie(NULL)

struct toado{
    double x, y;

    friend istream &operator>> (istream &is, toado &td){
        is >> td.x >> td.y;
        return is;
    }

    friend ostream &operator<< (ostream &os, toado &td){
        os << fixed << setprecision(2) << "(" << td.x << ", " << td.y << ")" << el;
        return os;
    }

    friend bool operator> (toado d1, toado d2){
        if (d1.x != d2.x) return d1.x > d2.x;
        return d1.y > d2.y;
    }

    friend toado operator+ (toado d1, toado d2){
        toado t;
        t.x = d1.x + d2.x;
        t.y = d1.y + d2.y;
        return t;
    }

};



int main(){
    fastio;

    ll n;
    cin >> n;
    toado a[100], maxn = {0,0}, tong = {0,0};
    for(int i = 0; i < n; i += 1) {
        cin >> a[i];
        if (a[i] > maxn) maxn = a[i];
        tong = tong + a[i];
    }

    cout << maxn << el << tong;



    return 0;
}
/*
in
3
3   2
1.4 2.5
1.3 5.13

out
(3.00, 2.00)
(5.70, 9.63)

dong 1 in toa do lon nhat
dong 2 in tong toa do

*/
