/ This template is designed by Satyabrata Nayak
// Name: Satyabrata Nayak
// LinkedIn:
// Github:
// Codechef:
// Follow above links for more detail about the author.....

// Best of luck here you START
//......................................................................
// #include <bits/stdc++.h>

#ifndef _GLIBCXX_NO_ASSERT
#include <cassert>
#endif
#include <cctype>
#include <cerrno>
#include <cfloat>
#include <ciso646>
#include <climits>
#include <clocale>
#include <cmath>
#include <csetjmp>
#include <csignal>
#include <cstdarg>
#include <cstddef>
#include <cstdio>
#include <cstdlib>
#include <cstring>
#include <ctime>

#if __cplusplus >= 201103L
#include <ccomplex>
#include <cfenv>
#include <cinttypes>
//#include <cstdalign>
#include <cstdbool>
#include <cstdint>
#include <ctgmath>
#include <cwchar>
#include <cwctype>
#endif

// C++
#include <algorithm>
#include <bitset>
#include <complex>
#include <deque>
#include <exception>
#include <fstream>
#include <functional>
#include <iomanip>
#include <ios>
#include <iosfwd>
#include <iostream>
#include <istream>
#include <iterator>
#include <limits>
#include <list>
#include <locale>
#include <map>
#include <memory>
#include <new>
#include <numeric>
#include <ostream>
#include <queue>
#include <set>
#include <sstream>
#include <stack>
#include <stdexcept>
#include <streambuf>
#include <string>
#include <typeinfo>
#include <utility>
#include <valarray>
#include <vector>

#if __cplusplus >= 201103L
#include <array>
#include <atomic>
#include <chrono>
#include <condition_variable>
#include <forward_list>
#include <future>
#include <initializer_list>
#include <mutex>
#include <random>
#include <ratio>
#include <regex>
#include <scoped_allocator>
#include <system_error>
#include <thread>
#include <tuple>
#include <type_traits>
#include <typeindex>
#include <unordered_map>
#include <unordered_set>
#endif
using namespace std;

// All defines shortcuts:
//........................................................................

// #define uniq(v) (v).erase(unique(all(v)), (v).end())
// #define fo(i, a, b) for (int i = a; i < b; i++)

#define int long long int
#define F first
#define S second
#define pb push_back
#define ppb pop_back
#define pf push_front
#define ppf pop_front
#define si set<int>
#define vi vector<int>
#define pii pair<int, int>
#define vpi vector<pii>
#define vpp vector<pair<int, pii>>
#define mii map<int, int>
#define mpi map<pii, int>
#define spi set<pii>
#define endl "\n"
#define sz(x) ((int)x.size())
#define all(p) p.begin(), p.end()
#define double long double
#define que_max priority_queue<int>
#define que_min priority_queue<int, vi, greater<int>>
#define print(a) \
    for (auto x : a) cout << x << " "; \
    cout << endl
#define print1(a) \
    for (auto x : a) cout << x.F << " " << x.S << endl
#define print2(a, x, y) \
    for (int i = x; i < y; i++) cout << a[i] << " "; \
    cout << endl

// Must Type SYNC on the first of main() function.. to reduce IO speed
#define SYNC \
    std::ios_base::sync_with_stdio(0); \
    cin.tie(NULL); \
    cout.tie(NULL);

// Here That is your HOME SWEET HOME... Now Solve the problem
//........................................................................

//........................................................................//
//........................................................................//
// BEST OF LUCK
//........................................................................//
//........................................................................//

void solve() {
    // Start writing the codes...

    char a, b;
    cin >> a >> b;
    if (a == b) {
        cout << a;
    } else {
        if (a == 'R' || b == 'R') {
            cout << 'R';
        } else if (a == 'B' || b == 'B') {
            cout << 'B';
        } else {
            cout << 'G';
        }
    }
}

int32_t main() {
    SYNC
    // int t = 1;
    // cin >> t;
    // while (t--)
    solve();
}
