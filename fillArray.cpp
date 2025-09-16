#include <iostream>
#include <array>
#include <numeric>
void fillArray(std::array<int, 5>& arr, int startValue) {
    // TODO: Use a loop to fill arr with consecutive values starting from 'startValue'
    // Hint: Time complexity is O(n)
    //for (int i{ 0 }; i < 5; i++) {
    //    arr[i] = startValue++;
    //}
        //for (int i{ 0 }; i < 5; i++) {
    //    arr[i] = startValue+i;
    //}
    //for (int& element : arr) {
    //    element = startValue++;
    //}
    std::iota(arr.begin(), arr.end(), startValue);
}

int main() {
    int start{};
    std::cin >> start;

    std::array<int, 5> arr{};
    fillArray(arr, start);

    for (int num : arr) {
        std::cout << num << " ";
    }
    std::cout << "\n";
    return 0;
}
