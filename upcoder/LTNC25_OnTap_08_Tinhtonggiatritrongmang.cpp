#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define el "\n"
#define fastio ios_base::sync_with_stdio(false);cin.tie(NULL)

template<typename T>
struct mang{
    vector<T> v;
};

template <typename T>
istream &operator>>(istream &is, mang<T> &m){
    string l;
    getline(is >> ws, l);

    stringstream ss(l);
    T gt;

    while(ss >> gt){
        m.v.push_back(gt);
    }

    return is;
}

template <typename T>
ostream &operator<<(ostream &os, mang<T> &m){
    T s = 0;

    for(int i = 0; i < m.v.size(); i += 1) s += m.v[i];

    os << s;

    return os;
}

int main(){
    fastio;

    char t;
    cin >> t;


    if (t == 'a'){
        mang<int> mint;
        cin >> mint;
        cout << mint;
    }
    else{
        mang<double> mdouble;
        cin >> mdouble;
        cout << fixed << setprecision(2) << mdouble;
    }


    return 0;
}
/*
in
b
2.4 7.7 1.3

out
11.40

tinh tong
*/
