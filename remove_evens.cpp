#include <iostream>
#include <vector>

void removeEvens(std::vector<int>& vec) {
    // TODO: Remove all even numbers from the vector
    // Hint: Use a loop to check each element; if even, use vec.erase()
    // Example: To remove the element at index 3, use vec.erase(vec.begin() + 3);
    // IMPORTANT: After erasing, the vector size decreases!
    //for (int i{ 0 }; i < static_cast<int>(vec.size()); i++) {
    //    if (!(vec[i] % 2)) {
    //        vec.erase(vec.begin() + i);
    //        i--;
    //    }
    //}
    //int size{ static_cast<int>(vec.size()) };
    //for (int i{ size - 1 }; i >= 0; i--) {
    //    if (!(vec[i] % 2)) {
    //      vec.erase(vec.begin() + i);
    //    }
    //}
    std::erase_if(vec, [](int num) { return num % 2 == 0;});

}

int main() {
    int size{};
    std::cin >> size;
    std::vector<int> vec(size);
    for (int i{ 0 }; i < size; i++) {
        std::cin >> vec[i];
    }
    removeEvens(vec);
    for (int num : vec) {
        std::cout << num << " ";
    }
    std::cout << "\n";
    return 0;
}
