//Author: Phat Tran
//All my info: https://phattvh.is-not-a.dev
#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define el "\n"
#define fastio ios_base::sync_with_stdio(false);



int main() {
    fastio;

    int n, a[100][100];
    cin >> n;
    for(int i = 0; i < n; i += 1) 
        for(int j = 0; j < n; j += 1) cin >> a[i][j];
        
    vector<int> parent(n, -1);
    vector<int> dist (n, INT_MAX);
    
    dist[0] = 0;
    
    for(int step = 1; step <= n - 1; step += 1) {
        for(int i = 0; i < n; i += 1) {
            for(int j = 0; j < n; j += 1) {
                if (a[i][j] != 0 && dist[i] != INT_MAX && dist[i] + a[i][j] < dist[j]){
                    dist[j] = dist[i] + a[i][j];
                    parent[j] = i;
                }
            }
        }
    }

    for(int i = 0; i < n; i += 1) {
        for(int j = 0; j < n; j += 1) {
            if (a[i][j] != 0 && dist[i] != INT_MAX && dist[i] + a[i][j] < dist[j]) {
                cout << "Phat hien chu trinh am" << el;
                return 0; 
            }
        }
    }

    if (dist[n - 1] == INT_MAX) cout << -1 << el;
    else cout << dist[n - 1] << el;

    vector<int> path;
    int curr = n - 1;
    while (curr != -1) {
        path.push_back(curr);
        curr = parent[curr];
    }
        
    for(int i = path.size() - 1; i >= 0; i -= 1) {
        cout << path[i];
        if (i > 0) cout << " ";
    }

    return 0;
}
