#include <iostream>
#include <string>

std::string fun (int *arr, int n) {
    if(n == 1)
        return "YES";
    else {
        for(int i = 0; i < n; i++) {
            for(int j = i + 1; j < n; j++) {
                if((arr[i] - arr[j] > 1 || arr[i] - arr[j] < -1)) {
                    return "NO";
                }
            }
        }
        return "YES";
    }
}


int main() {

    int cases;

    std::cin >> cases;

    int n;
    std::string op[cases];
    int arr[51];

    for(int i = 0; i < cases; i++) {
        std::cin>>n;
        for(int j = 0; j < n; j++) {
            std::cin >> arr[j];
        }

        op[i] = fun(arr, n);
    }

    for(int i = 0; i < cases; i++) {
        std::cout << op[i] << std::endl;
    }


    return 0;
}