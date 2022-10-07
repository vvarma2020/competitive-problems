// Include this header or include headers you want.
// bits/stdc++.h will include all headers into the program which is unneccessary.
// #include <bits/stdc++.h>
#include <iostream>
#include <algorithm>
// An example of a "macro" you can use to write code faster.
// #define forn(i, a, n) for (int i = a; i < n; i++)

const int MAXN = 200100;
const int MOD = 1000000007;

void getApartment(int *a, int*b, int n, int m, int k) {
    int count = 0;
    int checked[m] = { 0 };
    // a is array of applicant desired apartment size, b is size of each apartment

    for(int i = 0; i < n; i++) {
        for(int j = 0; j < m; j++) {
            if(checked[j] == 1) {
                // std::cout << "f";
                continue;
            } else {
                if(b[j] >= a[i] - k && b[j] <= a[i] + k) {
                    // std::cout << a[i] << " " << b[j] << " " << "checked : " << checked[j] << '\n';
                    count++;
                    checked[j] = 1;
                    break;
                }
                // else {
                //     std::cout << a[i] << " " << b[j] << " " << "f" << '\n';
                // }
            }
        }
    }

    std::cout << count << '\n';
}

void solve() {
    // Solve problem here.
    int n, m, k;
    std::cin >> n >> m >> k;
    int a[n];
    int b[m];
    for(int i = 0; i < n; i++) {
        std::cin >> a[i];
    }
    for(int i = 0; i < m; i++) {
        std::cin >> b[i];
    }

    getApartment(a, b, n, m, k);
}

int main() {
    // The following two lines will make input and output in C++ faster.
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(0); std::cout.tie(0);

    int T = 1;
    // std::cin >> T; // Comment this line out if you're not taking test cases.
    for(int i = 1; i <= T; i++) {
        solve();
    }

    return 0;
}