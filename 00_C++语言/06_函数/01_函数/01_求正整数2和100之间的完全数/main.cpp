#include <iostream>

int main() {
    int M, N;
    std::cin >> M >> N;

    int count = 0;
    int memoryUsed = 0;

    for (int i = 0; i < N; i++) {
        // 假设每次查找词典都算一次访问
        count++;

        if (memoryUsed < M) {
            memoryUsed++;
        }
        else {
            memoryUsed = 1;
        }
    }

    std::cout << count << std::endl;

    return 0;
}