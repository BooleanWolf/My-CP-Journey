
#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <sstream>
#include <queue>
#include <deque>
#include <bitset>
#include <iterator>
#include <list>
#include <stack>
#include <map>
#include <set>
#include <functional>
#include <numeric>
#include <utility>
#include <limits>
#include <time.h>
#include <math.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <assert.h>
#include <unordered_map>
using namespace std;

typedef long long int ll;
typedef long double ld;
typedef vector<int> vi;
typedef map<int, int> mii;
typedef queue<int> qi;

// /* 128 bit integer reading */

// __int128 read()
// {
//     __int128 x = 0, f = 1;
//     char ch = getchar();
//     while (ch < '0' || ch > '9')
//     {
//         if (ch == '-')
//             f = -1;
//         ch = getchar();
//     }
//     while (ch >= '0' && ch <= '9')
//     {
//         x = x * 10 + ch - '0';
//         ch = getchar();
//     }
//     return x * f;
// }
// void print(__int128 x)
// {
//     if (x < 0)
//     {
//         putchar('-');
//         x = -x;
//     }
//     if (x > 9)
//         print(x / 10);
//     putchar(x % 10 + '0');
// }
// bool cmp(__int128 x, __int128 y) { return x > y; }

// /* a = read() for reading the integer and print(a) to print that integer.  */

#define MX 10e9
vi graph[10000];
int visited[10000];
vi result;


void dfs(int v) {
    visited[v] = 1;

    for(int i = 0; i < graph[v].size(); i++) {
        if(!visited[graph[v][i]])  
                dfs(graph[v][i]);
    }
    
    result.push_back(v); 
        
}



int main()
{
    int node, edge;
    cin >> node >> edge;
    while(edge--) 
        {
        int a,b;
        cin >> a >> b;
        if(a==0 && b==0) {
            brea;
        }
        graph[a].push_back(b);
    }

    memset(visited, 0, 10000);

    for(int i = 1; i <= node; i++) {
        if(!visited[i])
            dfs(i);
    }

    reverse(result.begin(), result.end()); 

    for(int i = 0; i < result.size(); i++) {
        cout << result[i] << " " << endl;
    }

    return 0;
}
