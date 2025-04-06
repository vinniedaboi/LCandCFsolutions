#include <iostream>
#include <vector>
#include <cmath>

int sum(std::vector<int> &array) {
    int total = 0;
    for (int i = 0; i < array.size(); ++i) {
        total += array[i];
    }
    return total;
}

int main() {
    int t;
    std::cin >> t;
    while (t--) {
        int n, k, p;
        std::cin >> n >> k >> p;
        std::vector<int> array(n, 0);

        if (k < -n * p || k > n * p) {
            std::cout << -1 << std::endl;
            continue;
        }
        int remaining = k;
        int ops = 0;
        for (int i = 0; i < n; ++i) {
            if (remaining == 0) break;
            int value = std::max(-p, std::min(p, remaining));
            array[i] = value;
            remaining -= value;
            ops++;
        }
        std::cout << ops << std::endl;
    }
    return 0;
}

