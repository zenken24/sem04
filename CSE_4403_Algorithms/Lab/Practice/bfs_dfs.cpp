#include <iostream>
#include <vector>
#include <queue>
#include <stack>
#include <algorithm>
using namespace std; 
const int N = 1e5+10; 

vector<int> adj[N];
bool vis1[N];
bool vis2[N]; 

void dfs(int node){
    vis1[node] = 1; 
    cout << node << " "; 

    for(auto child : adj[node]){
        if(!vis1[child]){
            dfs(child);
        }
    }
}

void bfs(int node){
    queue<int> q; 
    q.push(node); 
    while(!q.empty()){
        int curr = q.front();
        q.pop();
        vis2[curr] = 1;
        cout << curr << "->" ;
        for(auto child: adj[curr]){
            if(!vis2[child]){
                q.push(child); 
            }
        }
    }
}

// n = number of nodes 
// m = number of edges
// for trees  m = n - 1

int main(){
    int n,m;
    cin >> n >> m; 
    for(int i = 0; i < m; i++){
        int u, v; 
        cin >> u >> v; 
        adj[u].push_back(v); // for undirected graph
        adj[v].push_back(u); // for bidirected graph 
    }
    int source; 
    cin >> source; 
    bfs(source);
    cout << endl; 
    dfs(source);
}