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

// bool nonDegenerateTriangle(int a, int b, int c)
// {
//     // cout << endl;
//     // cout << a << b << c << endl;
//     if (a + b > c && a + c > b && b + c > a)
//     {
//         return 1;
//     }
//     else
//     {
//         return 0;
//     }
// }

// bool nonDegenerateTriangleArray(vector<int> v, int size)
// {
//     sort(v.begin(), v.end());

//     for (int i = 0; i < size - 2; i++)

//         if (v[i] + v[i + 1] > v[i + 2])
//             return true;
//     return false;
// }

// void print_vector(vector<int> vec)
// {
//     for (int i = 0; i < vec.size(); i++)
//         cout << vec[i] << " ";
// }

// int isItEvenOdd(int d)
// {
//     if (d % 2 == 0)
//     {
//         return 1;
//     }
//     else
//     {
//         return 0;
//     }
// }
// int maxElementOfAnArray(int arr[], int n)
// {
//     for (int i = 0; i < n; ++i)
//     {

//         if (arr[0] < arr[i])
//             arr[0] = arr[i];
//     }

//     return arr[0];
// }

// string toLower(string s)
// {
//     transform(s.begin(), s.end(), s.begin(), ::tolower);
//     return s;
// }

// int findingElementBySecondElement(mii m, int key)
// {
//     for (auto x : m)
//     {
//         if (x.second == key)
//         {
//             return x.first;
//         }
//     }

//     return -1;
// }

// void getIndex(vector<int> v, int K)
// {
//     auto it = find(v.begin(), v.end(), K);
//     if (it != v.end())
//     {
//         int index = it - v.begin();
//         cout << index << endl;
//     }
//     else
//     {
//         cout << "-1" << endl;
//     }
// }

#define MX 10e9

int main()
{

    // #ifndef ONLINE_JUDGE
    //     freopen("input.txt", "r", stdin);
    //     freopen("output.txt", "w", stdout);
    // #endif
    string r;
    float a, b, c, d;
    vector<vector<int>> rect_points;
    int j = 0;
    while (cin >> r >> a >> b >> c >> d)
    {
        if (r == "*")
        {
            break;
        }
        rect_points[j].push_back(a);
        rect_points[j].push_back(b);
        rect_points[j].push_back(c);
        rect_points[j].push_back(d);
        j = j + 1;
    }
    float x, y;
    int point = 1;
    int m = 0;
    while (cin >> x >> y)
    {
        if (x == 9999.9 && y == 9999.9)
        {
            break;
        }
        while (m)
        {
            if (m == j)
            {
                break;
            }
            if ((x > min(rect_points[m][0], rect_points[m][1]) && x < max(rect_points[m][0], rect_points[m][1])) && (y > min(rect_points[m][2], rect_points[m][3]) && x < max(rect_points[m][2], rect_points[m][3])))
            {
                cout << "Point " << point << "is contained in figure " << m << endl;
                point += 1;
                break;
            }
            m++;
        }
    }

    return 0;
}
/*



*/