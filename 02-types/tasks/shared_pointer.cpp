#include <iostream>
#include <memory>
#include <vector>

std::vector<std::shared_ptr<int>> vec;

void createAndAddToVec(int amount) {
    for (int i = 0; i < amount; ++i) {
        vec.push_back(std::make_shared<int>(i));  // previously: vec.push_back(&i);

        // the same in 2 lines:
        // auto num = std::make_shared(i);
        // vec.push_back(num);
    }
}

int main() {
    createAndAddToVec(5);
    for (const auto& el : vec) {
        std::cout << *el << '\n';
    }
} 
