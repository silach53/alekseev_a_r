#include "iostream"
#include <vector>
#include "QueueP/QueueP.hpp"
#include "algorithm"

int main() {
    std::vector<int> vi = {2, 4, 4, 1, 1, 6};
    QueueP q(vi);
    std::sort(vi.begin(), vi.end());

    for(size_t i = 0; i<vi.size(); ++i) {
        std::cout << q.top() << " ";
        q.pop();
    }

    return 0;
}