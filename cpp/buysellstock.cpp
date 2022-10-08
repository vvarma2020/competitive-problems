// include this header or include headers you want
// bits/stdc++.h will include all headers into the program which is unneccessary
// #include <bits/stdc++.h>
#include <iostream>
#include <vector>
#include <algorithm>

// An example of a "macro" you can use to write code faster.
// #define forn(i, a, n) for (int i = a; i < n; i++)

const int MAXN = 200100;
const int MOD = 1000000007;

void solve() {
    // solve problem here
    std::vector<int> v;
    int input;
    while (std::cin >> input) {
        v.push_back(input);
    }
    int res = 0;
    for (int i = 0; i < v.size(); i++) {
        for (int j = i; j < v.size(); j++) {
            res = std::max(res, v[j] - v[i]);
        }
    }
    std::cout << res << std::endl;
}

int main() {
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(0); std::cout.tie(0);

    solve();

    return 0;
}