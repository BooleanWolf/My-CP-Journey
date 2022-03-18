

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
#define MAX 100000


vi graph[MAX];
int in_degree[MAX];
vi ans;


void topo_sort(int n){
    
    qi q;

    for(int i = 1; i<= n; i++) {
        if(in_degree[i]==0)
            q.push(i);
    

    }

    int cnt = 1;

    while(!q.empty()){
        
        int curr = q.front();
        ans.push_back(curr);

        q.pop();

        for(int node: graph[curr]){
            in_degree[node]--;
            if(in_degree[node]==0){
                q.push(node);
                cnt++;
            }
        }
        
    }

    if(cnt != n){
        cout << "IMPOSSIBLE" << endl;
    }

    else{
    
        for(int u : ans) {
            cout << u << " ";
        }
    }


}


int main()
{

    int node, edge;
    cin >> node >> edge;
    
    memset(in_degree, 0, MAX); 


    while(edge--) {
        int a, b;
        cin >> a >> b;
        graph[a].push_back(b); 
        in_degree[b]++; 
    }
       

    topo_sort(node); 

    return 0;
}
