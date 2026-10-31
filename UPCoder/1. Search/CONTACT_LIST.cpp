//Author: Phat Tran
//All my info: https://phattvh.is-not-a.dev


#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define el "\n"
#define fastio ios_base::sync_with_stdio(false); cin.tie(NULL);

struct sodt{
    string so;
    ll den, di;

    friend istream &operator>> (istream &is, sodt &sdt){
        is >> sdt.so >> sdt.den >> sdt.di;
        return is;
    }

    friend ostream &operator<<(ostream &os, const sodt &sdt){
        os << "{" << sdt.so << "," << sdt.den << "," << sdt.di << "}";
        return os;
    }
};

int main(){
    fastio;

    ll n, maxden = LLONG_MIN, mindi = LLONG_MAX;
    string findsdt;
    sodt sdt[1000], maxsdt, minsdt;

    cin >> n >> findsdt;

    for(int i = 0; i < n; i += 1) cin >> sdt[i];

    for(int i = 0; i < n; i += 1) if (findsdt == sdt[i].so) cout << sdt[i] << el;

    for(int i = 0; i < n; i += 1) if (sdt[i].den > maxden){
        maxden = sdt[i].den;
        maxsdt = sdt[i];
    }

    for(int i = 0; i < n; i += 1) if (sdt[i].di < mindi){
        mindi = sdt[i].di;
        minsdt = sdt[i];
    }

    cout << maxsdt << el << minsdt;

    return 0;
}
