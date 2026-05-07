#include <iostream>
#include <vector>
#include <stack>
#include <algorithm>

using namespace std;

const int N = 1e5+10; 

vector<int> adj[N];
bool vis[N];        
stack<int> st;        


void dfs(int node) {
    vis[node] = true;
    for (int i : adj[node]) {
        if (!vis[i]) {
            dfs(i);
        }
    }
    st.push(node);
}

void topoSort(int n) {
    // Ensure every node is visited (handles disconnected components)
    for (int i = 1; i <= n; i++) {
        if (!vis[i]) {
            dfs(i);
        }
    }
    // Pop elements from stack to get the topological order
    while (!st.empty()) {
        cout << st.top() << " ";
        st.pop();
    }
    cout << endl;
}

int main() {
    int n, m; 
    cin >> n >> m;

    for (int i = 0; i < m; i++) {
        int u, v;
        cin >> u >> v;
        adj[u].push_back(v);
    }

    cout << "Topological Sort Order: ";
    topoSort(n);

    return 0;
}