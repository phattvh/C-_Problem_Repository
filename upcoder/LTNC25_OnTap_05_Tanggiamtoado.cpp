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

    friend toado operator++ (toado m, int){
        m.x += 1;
        m.y += 1;
        return m;
    }

    friend toado operator-- (toado m, int){
        m.x -= 1;
        m.y -= 1;
        return m;
    }

};



int main(){
    fastio;

    toado n;
    cin >> n;

    toado t1 = n++;
    cout << t1;

    t1 = n--;
    cout << t1;



    return 0;
}
/*
in
3 4

out
(4.00, 5.00)
(2.00, 3.00)

dong 1 ++, dong 2 --
*/
