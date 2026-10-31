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

    friend bool operator> (toado a, toado b){
        if (a.x != b.x) return a.x > b.x;
        return a.y > b.y;
    }

    friend bool operator== (toado a, toado b){
        return (a.x == b.x) && (b.y == a.y);
    }

};



int main(){
    fastio;

    toado a, b;
    cin >> a >> b;
    if (a > b) cout << "lon hon";
    else if (a == b) cout << "trung nhau";
    else cout << "nho hon";



    return 0;
}
/*
in
3 4
7 9

out
nho hon

Nếu tọa độ thứ nhất lớn hơn tọa độ thứ hai thì in ra “lon hon”,
nếu nhỏ hơn thì in ra “nho hon”, nếu trung nhau thì in ra “trung nhau”
*/
