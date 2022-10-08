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
    int n, input;
    std::vector<int> nums;
    while (std::cin >> input) // terminate with anything other than integer
    {
        nums.push_back(input);
    }
    n = nums.size();
    std::sort(nums.begin(), nums.end());
    int res = 0, i = 0, j = n - 1;
    for( ; i < j; i++, j--) {
        res = std::max(res, nums[i] + nums[j]);
    }
    std::cout << res << std::endl;
    
}

int main() {
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(0); std::cout.tie(0);

    solve();

    return 0;
}