//Author: Phat Tran
//All my info: https://phattvh.is-not-a.dev
#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define el "\n"
#define fastio ios_base::sync_with_stdio(false);cin.tie(NULL)

template<typename T>
struct mang{
    T a, b, c;
};

template <typename T>
istream &operator>>(istream &is, mang<T> &m){
    is >> m.a >> m.b >> m.c;
    return is;
}

template <typename T>
ostream &operator<<(ostream &os, mang<T> &m){
    T maxn = m.a;
    if (m.b > maxn) maxn = m.b;
    if (m.c > maxn) maxn = m.c;

    os << maxn;

    return os;
}

int main(){
    fastio;

    char t;
    cin >> t;


    if (t == 'a'){
        mang<ll> a;
        cin >> a;
        cout << a;
    }
    else if (t == 'b'){
        mang<double> b;
        cin >> b;
        cout << fixed << setprecision(2) << b;
    } else{
        mang<char> c;
        cin >> c;
        cout << c;
    }


    return 0;
}
/*
in
b
2.4 7.7 1.3

out
7.70

tim so lon nhat
*/
