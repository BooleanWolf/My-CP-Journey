#include <bits/stdc++.h>
using namespace std;
vector<int> g[10000];
vector<bool> v;
vector<int> r;
void dfs(int s)
{
    v[s] = 1;
    for (int i = 0; i < g[s].size(); i++)
    {
        int x = g[s][i];
        if (v[x] == 0)
            dfs(x);
    }
    r.push_back(s);
}
int main()
{
    int nodes, edges;
    while (cin >> nodes >> edges, nodes != 0 || edges != 0)
    {
        v.clear();
        v.assign(nodes + 1, 0);
        r.clear();
        for (int i = 0; i < edges; i++)
        {
            int u, v;
            cin >> u >> v;
            g[u].push_back(v);
        }
        for (int i = 1; i <= nodes; i++)
        {
            if (v[i] == 0)
                dfs(i);
        }
        for (int i = nodes - 1; i >= 0; i--)
        {
            cout << r[i];
            if (i)
                cout << ' ';
        }
        cout << endl;
    }
    return 0;
}
