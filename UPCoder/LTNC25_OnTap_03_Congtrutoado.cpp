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

    friend ostream &operator<< (ostream &os, const toado &td){
        os << fixed << setprecision(2) << "(" << td.x << ", " << td.y << ")" << el;
        return os;
    }

    friend toado operator+ (toado a, toado b){
        toado tong;
        tong.x = a.x + b.x;
        tong.y = a.y + b.y;
        return tong;
    }

    friend toado operator- (toado a, toado b){
        toado tong;
        tong.x = a.x - b.x;
        tong.y = a.y - b.y;
        return tong;
    }

};



int main(){
    fastio;

    toado a, b;
    cin >> a >> b;
    cout << a + b << a - b;



    return 0;
}
/*
in
3 4
7 2

out
(10.00, 6.00)
(-4.00, 2.00)

*/
