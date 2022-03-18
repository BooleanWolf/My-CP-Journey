

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
int in_edges[MAX]; 
int boss[MAX];
vi ans;

int prior = 1; 

int final[MAX]; 

void kahn(int node){
    memset(boss, 0, MAX);  
    qi q;

    for(int i=0; i< node; i++) {
        if(in_edges[i]==0){
            q.push(i);
            if(boss[i] == 0)
            {boss[i] = prior;} 
        }
    }
  
      while(!q.empty()){ 
        int curr = q.front();
        ans.push_back(curr);
        int curr_prior = boss[curr]; 

        q.pop();

        for(int ns: graph[curr]) {
            in_edges[ns]--;
            if(in_edges[ns]==0){
                q.push(ns);
                 if(boss[ns] == 0)
                 {boss[ns] = curr_prior + 1;} 
                }
            
        }

    }

   
    for(int i = 0; i < node; i++){
        cout << boss[i] <<  " "<< i << endl; 
    }


}


int main()
{
    int t;
    cin >> t;
    int t0 = 1; 
    memset(in_edges, 0, MAX);
    while(t--) {
        int node, edge;
        cin >> node >> edge;
        
        while(edge--) {
            int a, b;
            cin >> a >>b;
            graph[b].push_back(a);
            in_edges[a]++;
        }

        cout << "Scenario #" << t0 << ":" << endl;              
        kahn(node);
        t0++; 

    }

 



    return 0;
}
