#include <iostream>
#include <algorithm>

void fun(int *a, int n) {
    int count = 0;
    std::sort(a, a + n);
    for(int i = 0; i < n; i++) {
        i == 0 ? count++ : a[i] > a[i - 1] ? count++ : 0;
    }

    std::cout << count << '\n';
}

int main() {

    int n;
    std::cin >> n;
    int arr[n];

    for(int i = 0; i < n; i++) {
        std::cin >> arr[i];
    }

    fun(arr, n);

    return 0;
}