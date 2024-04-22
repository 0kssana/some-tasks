#include <iostream>
#include <vector>
#include <deque>

int main() {
    int numElements, windowSize;
    std::cin >> numElements >> windowSize;

    long long result = 0;
    std::deque<std::pair<int, int>> dq;
    std::vector<int> takenCount(numElements);

    for (int i = 0; i < numElements; ++i) {
        int value;
        std::cin >> value;
        while (!dq.empty() && dq.front().second <= i - windowSize) {
            dq.pop_front();
        }
        while (!dq.empty() && dq.back().first >= value) {
            dq.pop_back();
        }
        dq.push_back({value, i});
        result += dq.front().first;
        takenCount[dq.front().second]++;
    }

    std::cout << result << std::endl;

    for (int i = 0; i < numElements; ++i) {
        std::cout << takenCount[i] << " ";
    }

    std::cout << std::endl;

    return 0;
}

