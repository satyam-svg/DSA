#include <iostream>
#include <sstream>
#include <vector>
#include <algorithm>

int main() {
    // Read input
    std::string s;
    std::cin >> s;

    // Tokenize the input string
    std::istringstream iss(s);
    std::vector<int> numbers;
    int num;
    char plus;

    while (iss >> num) {
        numbers.push_back(num);
        if (iss >> plus) {
            // Consume the '+' character
        }
    }

    // Sort the vector in non-decreasing order
    std::sort(numbers.begin(), numbers.end());

    // Print the rearranged sum
    for (size_t i = 0; i < numbers.size() - 1; ++i) {
        std::cout << numbers[i] << "+";
    }
    std::cout << numbers.back() << std::endl;

    return 0;
}
