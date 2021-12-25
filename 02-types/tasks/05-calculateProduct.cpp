#include <iostream>
#include <memory>
#include <vector>

// TODO: Implement calculateProduct()
// It should take 2 int values and return their product as a shared_ptr.
// Additionally, check how many owners are there.
std::shared_ptr<int> calculateProduct(int int_a, int int_b) {
    std::shared_ptr<int> result = std::make_shared<int>(int_a * int_b);
    std::cout << "num: " << *result << " | owners: " << result.use_count() << "\n";

    return result;
}

int main() {
    auto number = calculateProduct(10, 20);
    std::cout << "num: " << *number << " | owners: " << number.use_count() << "\n";

    return 0;
}
