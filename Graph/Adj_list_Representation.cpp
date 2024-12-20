#include <bits/stdc++.h>
using namespace std;

// less space - O(2*E)
// undirected

int main() {
    int n, m;
    cin >> n >> m;
    vector<int> adj[n+1]; // 1 based indexing
    for (int i = 0; i < m; i++) {
        int u, v; // nodes
        cin >> u >> v;
        adj[u].push_back(v); 
        adj[v].push_back(u); // to store neighbour of both, it directed graph this line not need to write rest same, space O(E)
        }
}