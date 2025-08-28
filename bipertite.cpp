#include <bits/stdc++.h>
using namespace std;

const int MAX = 20005;

vector<int> adj[MAX];
bool visited[MAX];
int color[MAX];

int bfs(int start) {
    queue<int> q;
    q.push(start);
    visited[start] = true;
    color[start] = 0;

    int count[2] = {1, 0};

    while (!q.empty()) {
        int u = q.front();
        q.pop();

        for (int v : adj[u]) {
            if (!visited[v]) {
                visited[v] = true;
                color[v] = 1 - color[u];
                count[color[v]]++;
                q.push(v);
            }
        }
    }

    return max(count[0], count[1]);
}

int main() {
    ios::sync_with_stdio(false); // Fast IO
    cin.tie(nullptr);

    int T;
    cin >> T;

    for (int i = 1; i <= T; i++) {
        int n;
        cin >> n;

        for (int i = 0; i < MAX; i++) {
            adj[i].clear();
            visited[i] = false;
            color[i] = -1;
        }

        set<int> nodes;

        for (int i = 0; i < n; i++) {
            int u, v;
            cin >> u >> v;
            adj[u].push_back(v);
            adj[v].push_back(u);
            nodes.insert(u);
            nodes.insert(v);
        }

        int res = 0;

        for (int node : nodes) {
            if (!visited[node]) {
                res += bfs(node);
            }
        }

        cout << "Case " << i << ": " << res << '\n';
    }

    return 0;
}

