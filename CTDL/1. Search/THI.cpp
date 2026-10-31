#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define el "\n"
#define fastio ios_base::sync_with_stdio(false); cin.tie(NULL);

template <class dtp>
void quicksort(dtp a[], ll left, ll right){
    dtp x;
    ll i, j;

    if (left >= right) return;
    x = a[(left + right) / 2];

    i = left;
    j = right;

    while (i < j){
        while (a[i] < x) i += 1;
        while (a[j] < x) j -= 1;

        if (i <= j) {
            swap (a[i], a[j]);
            i += 1;
            j -= 1;
        }
    }
    quicksort(a, left, j);
    quicksort(a, i, right);
}

int main(){
    fastio;




    return 0;
}
