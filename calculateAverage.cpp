#include <iostream>
#include <numeric>
double calculateAverage(int arr[], int size) {
    // TODO: Sum all elements and divide by size
    // Hint: Use static_cast<double>() to  cast size to double for division
    /*long long sum{};
    for (int i{ 0 }; i < size; i++)
    {
        sum += arr[i];
    }*/
    long long sum = std::accumulate(arr, arr + size, 0LL);
    return static_cast<double>(sum)/size; // Placeholder
}

int main() {
    int size{};
    std::cin >> size;
    int arr[100]{}; // Max size as per constraint
    for (int i{ 0 }; i < size; i++) {
        std::cin >> arr[i];
    }
    double avg{ calculateAverage(arr, size) };
    std::cout << avg << "\n";
    return 0;
}