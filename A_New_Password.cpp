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

void print_vector(vector<int> vec)
{
    for (int i = 0; i < vec.size(); i++)
        cout << vec[i] << " ";
}

int isItEvenOdd(int d)
{
    if (d % 2 == 0)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}
int maxElementOfAnArray(int arr[], int n)
{
    for (int i = 0; i < n; ++i)
    {

        if (arr[0] < arr[i])
            arr[0] = arr[i];
    }

    return arr[0];
}

string toLower(string s)
{
    transform(s.begin(), s.end(), s.begin(), ::tolower);
    return s;
}

#define MX 10e9

int main()
{

#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif
    int n, k;
    string password = "";
    // char 97 to 122
    cin >> n >> k;
    int i = 0;
    bool rev = false;
    int val = 96;
    while (n--)
    {
        if (rev)
        {
            val = 96;
            i = 0;
            rev = false;
        }
        val = val + 1;

        // cout << val << endl;
        char letter = char(val);
        // cout << letter << endl;
        password += letter;

        if (i == k - 1)
        {
            rev = true;
            i = 0;
        }

        i = i + 1;
    }

    cout << password;
}

/*






*/