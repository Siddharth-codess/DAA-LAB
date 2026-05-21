#include <iostream>
#include <vector>
#include <climits>
using namespace std;

int main()
{
    int n, e;
    cin >> n >> e;

    vector<vector<int>> graph(n, vector<int>(n, 0));

    for(int i = 0; i < e; i++)
    {
        int u, v, w;
        cin >> u >> v >> w;
        graph[u][v] = w;
        graph[v][u] = w;
    }

    vector<int> key(n, INT_MAX);
    vector<bool> mst(n, false);
    vector<int> parent(n, -1);

    key[0] = 0;

    for(int count = 0; count < n - 1; count++)
    {
        int u = -1;
        int mini = INT_MAX;

        for(int i = 0; i < n; i++)
        {
            if(!mst[i] && key[i] < mini)
            {
                mini = key[i];
                u = i;
            }
        }

        mst[u] = true;

        for(int v = 0; v < n; v++)
        {
            if(graph[u][v] && !mst[v] && graph[u][v] < key[v])
            {
                parent[v] = u;
                key[v] = graph[u][v];
            }
        }
    }

    int total = 0;

    cout << "Edges in MST:\n";

    for(int i = 1; i < n; i++)
    {
        cout << parent[i] << " - " << i << " : " << graph[i][parent[i]] << endl;
        total += graph[i][parent[i]];
    }

    cout << "Total Cost = " << total;

    return 0;
}