
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

typedef bitset<8> bit8;

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

char b[4][4];
int cnt = 0;
int res = 0;
int main()
{
    for (int i = 0; i < 4; i++)
    {
        for (int j = 0; j < 4; j++)
        {
            cin >> b[i][j];
        }
    }

    for (int i = 0; i < 4; i++)
    {
        for (int j = 0; j < 4; j++)
        {
            if (b[i][j] == '#')
            {
                if ((i + 1 < 4 && j + 1 < 4) && b[i + 1][j + 1] == '.')
                {
                    cnt++;
                }
                if (cnt > 1)
                {
                    res = 1;
                    break;
                }
                if ((i + 1 < 4) && b[i + 1][j] == '.')
                {
                    cnt++;
                }
                if (cnt > 1)
                {
                    res = 1;
                    break;
                }
                if ((i + 1 < 4) && b[i + 1][j] == '.')
                {
                    cnt++;
                }
                if (cnt > 1)
                {
                    res = 1;
                    break;
                }
            }
        }
    }

    return 0;
}
