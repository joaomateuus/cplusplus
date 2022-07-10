#include <iostream>
#include <stdlib.h>

int main() {
    int num1, num2, sum, sub, mult, div;

    std::cout << "Welcome to our first calculator" << std::endl;
    std::cout << "Type the first number" << std::endl;
    std::cin >> num1;
    std::cout << "Type the second number" << std::endl;
    std::cin >> num2;

    sum = num1 + num2;
    sub = num1 - num2;
    mult = num1 * num2;
    div = num1 / num2;

    std::cout << "The sum is " <<sum << std::endl;
    std::cout << "The sub is " <<sub << std::endl;
    std::cout << "The multiplication is " <<mult << std::endl;
    std::cout << "The division is " <<div << std::endl;

}