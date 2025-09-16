#include <iostream>
#include <vector>

int linearSearchWithCount(const std::vector<int>& vec, int target) {
    // TODO: Count the number of occurrences of the target in the vector
    // Hint: Check each element and increment a counter
    int counter{ 0 };
    //for (size_t i{ 0 }; i < vec.size(); i++ ) {
    //    if (vec[i] == target) counter++;
    //}
    //for (int num : vec) {
    //    if (num == target) counter++;
    //}
    //return counter; // Placeholder
    return std::count(vec.begin(), vec.end(), target);
}

int main() {
    int size{};
    std::cin >> size;
    std::vector<int> vec(size);
    for (int i{ 0 }; i < size; i++) {
        std::cin >> vec[i];
    }
    int target{};
    std::cin >> target;
    int count{ linearSearchWithCount(vec, target) };
    std::cout << "Number of " << target << "s: " << count << "\n";
    return 0;
}
