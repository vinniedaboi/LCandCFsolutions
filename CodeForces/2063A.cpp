#include <iostream>
#include <vector>

bool check_prime(int n) {

    if (n == 2) return true;
    if (n % 2 == 0) return false;
    for (int i = 3; i * i <= n; i += 2) {
        if (n % i == 0) return false;
    }
    return true;
}

int main()
{
    int t;
    std::cin >> t;
    for (int i = 0; i < t; ++i)
    {
        int x;
        int y;
        std::cin >> x >> y;
        if (x == 1 && y == 1) {
            std::cout << 1 << std::endl;
        } else {
            std::cout << (y - x) << std::endl;
        }
    }
}