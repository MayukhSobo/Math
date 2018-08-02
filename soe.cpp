#include <iostream>
#include <vector>

std::vector<bool> sieve(int64_t n) {
    // Take a vector of size n
    // Initialize all the values with true
    std::vector<bool> table(n, true);
    for(int64_t i = 2; i <= n; i++) {
        if (table[i - 1] == true) {
            for (int64_t j = 2; i * j <= n; j++) {
                table[i * j - 1] = false;
            }
        }
    }
    return table;
}

int main() {
    std::vector<bool> out = sieve(10000);
    // int count = 1;
    // for (auto each : out) {
    //     // std::cout << each << std::endl;
    //     if(each and count != 1)
    //         std::cout << count << std::endl;
    //     count++;
    // }
    return 0;
}
