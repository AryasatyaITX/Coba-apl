#include <iostream>
#include <vector>
#include <queue>
#include <climits>
#include <functional>
#include <algorithm>
using namespace std;

struct DijkstraRes {
    vector<int> dist;
    vector<int> parent;
};

DijkstraRes dijkstra(const vector<vector<pair<int,int>>>& adj, int src) {
    int V = adj.size();
    priority_queue<pair<int,int>, vector<pair<int,int>>, greater<pair<int,int>>> pq;

    vector<int> dist(V, INT_MAX);
    vector<int> parent(V, -1);

    dist[src] = 0;
    pq.emplace(0, src);

    while (!pq.empty()) {
        auto [d, u] = pq.top();
        pq.pop();

        if (d > dist[u]) continue;

        for (auto &p : adj[u]) {
            int v = p.first;
            int w = p.second;

            if (dist[u] != INT_MAX && dist[u] + w < dist[v]) {
                dist[v] = dist[u] + w;
                parent[v] = u;
                pq.emplace(dist[v], v);
            }
        }
    }
    return {dist, parent};
}

vector<int> buildPath(int src, int target, const vector<int>& parent) {
    vector<int> path;
    for (int cur = target; cur != -1; cur = parent[cur]) {
        path.push_back(cur);
        if (cur == src) break;
    }
    reverse(path.begin(), path.end());
    if (path.empty() || path.front() != src) return {};
    return path;
}

int main() {
    vector<string> nama = {
        "FIB", "FMIPA", "FAHUT", "FISIP", "FM", "FKIP", "R", "FEB",
        "FPIK", "FAPERTA", "FKG", "FK", "FT2", "FT1", "FH", "FKM"
    };

    int V = 16;
    vector<vector<pair<int,int>>> adj(V);

    auto addEdge = [&](int u, int v, int w) {
        adj[u].push_back({v, w});
        adj[v].push_back({u, w});
    };

    // Edge jarak (meter) 
    addEdge(0,1,350);
    addEdge(0,3,600);
    addEdge(1,3,240);
    addEdge(1,2,400);
    addEdge(3,4,210);
    addEdge(4,5,110);
    addEdge(5,6,300);
    addEdge(6,7,120);
    addEdge(6,8,290);
    addEdge(6,9,450);
    addEdge(7,10,170);
    addEdge(10,11,110);
    addEdge(8,12,280);
    addEdge(12,13,140);
    addEdge(13,14,250);
    addEdge(14,15,240);

    int src = 6; // Rektorat
    auto res = dijkstra(adj, src);

    cout << "Jarak & Jalur TERPENDEK dari " << nama[src] << ":\n\n";
    for (int t = 0; t < V; t++) {
        cout << nama[t] << " = ";
        if (res.dist[t] == INT_MAX) {
            cout << "tidak terhubung\n";
            continue;
        }
        cout << res.dist[t] << " meter | Path: ";
        auto path = buildPath(src, t, res.parent);
        for (int i = 0; i < (int)path.size(); i++) {
            cout << nama[path[i]] << (i+1<(int)path.size() ? " -> " : "");
        }
        cout << "\n";
    }

    //Jalur terpanjang
    int farNode = -1, best = -1;
    for (int i = 0; i < V; i++) {
        if (i == src || res.dist[i] == INT_MAX) continue;
        if (res.dist[i] > best) {
            best = res.dist[i];
            farNode = i;
        }
    }

    cout << "\n=== Jalur \"TERPANJANG\" (terjauh dari R berdasar shortest-path) ===\n";
    if (farNode != -1) {
        cout << "Tujuan: " << nama[farNode] << "\n";
        cout << "Jarak : " << best << " meter\n";
        cout << "Path  : ";
        auto path = buildPath(src, farNode, res.parent);
        for (int i = 0; i < (int)path.size(); i++) {
            cout << nama[path[i]] << (i+1<(int)path.size() ? " -> " : "");
        }
        cout << "\n";
    }

    return 0;
}