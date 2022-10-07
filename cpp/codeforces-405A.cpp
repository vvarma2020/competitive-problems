#include <iostream>
#include <string>
#include <functional>
#include <algorithm>

void fun(int arr[], int n) {
    std::sort(arr, arr + n);
    for(int i = 0; i < n; i++) {
        std::cout << arr[i] << " ";
    }
}

int main() {
    
    int n;
    std::cin >> n;
    int arr[n];
    int size = sizeof(arr)/sizeof(arr[0]);
    for(int i = 0; i < size; i++) {
        std::cin >> arr[i];
    }

    fun(arr, size);    

    std::cout << "\n";

    return 0;
}