#include <cstdio>
#include <iostream>

int main() {
    auto arr = std::to_array({1, 2, 3, 4, 5});
    for (int val : arr) {
        std::printf("%d, ", val);
    }
    std::printf("Hello World!\n");
    return 0;
}