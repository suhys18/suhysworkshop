#include <iostream>

int main() {
    int num1, num2;

    // Prompt the user to enter the first number
    std::cout << "Enter the first number: ";
    std::cin >> num1;

    // Prompt the user to enter the second number
    std::cout << "Enter the second number: ";
    std::cin >> num2;

    // Calculate the sum
    int sum = num1 + num2;

    // Print the sum
    std::cout << "The sum of " << num1 << " and " << num2 << " is: " << sum << std::endl;

    return 0;
}
