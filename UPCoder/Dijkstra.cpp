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
    priority_queue<pair<int, int>, vector<pair<int, int>>, greater<pair<int, int>>> pq;

    dist[0] = 0;
    pq.push({0, 0});

    while(!pq.empty()){
        int distance = pq.top().first;
        int vertex = pq.top().second;

        pq.pop();

        for(int i = 0; i < n; i += 1) if (a[vertex][i] != 0){
            if (a[vertex][i] + distance < dist[i]){
                dist[i] = a[vertex][i] + distance;
                pq.push({a[vertex][i] + distance, i});
                parent[i] = vertex;
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

    for(int i = path.size() - 1; i >= 0; i -= 1) cout << path[i] << " ";

    return 0;
}
