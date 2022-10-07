// include this header or include headers you want
// bits/stdc++.h will include all headers into the program which is unneccessary
// #include <bits/stdc++.h>
#include <iostream>
#include <algorithm>
#include <functional>
// An example of a "macro" you can use to write code faster.
// #define forn(i, a, n) for (int i = a; i < n; i++)

const int MAXN = 200100;
const int MOD = 1000000007;

void solve() {

    int t{};
    std::cin >> t;
    int counts[t];
    int l = t;
    int k = 0;
    while(t--) {

        int n{};
        std::cin >> n;
        std::string s{};
        std::cin >> s;
        int c{};
        for(int i = 0; i < n; i++){
            if(s[i] == '1')
                c++;
        }
        // 1--..--1 or 1 or 11.
        // Let there be n digits and c ones.
        // Then there are n - c zeroes and n - 2 ones which have to be filled in the gaps.
        // So total number of ways are c(c + 1) / 2.
        counts[k] = (c * (c + 1) / 2);
        k++;
    }

    for(int i = 0; i < l; i++) {
        std::cout << counts[i] << std::endl;
    }
}

int main() {
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(0); std::cout.tie(0);

    int T = 1;
    // std::cin >> T; // comment this line out if you're not taking test cases
    for(int i = 1; i <= T; i++) {
        solve();
    }

    return 0;
}