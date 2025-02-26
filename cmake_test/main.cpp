#include <iostream>
#include "utils.hpp"
#include "math.hpp"

int main() {
    std::cout << "Hello, world!\n";
    send_message();
    std::cout << "Функция сложения из статической библиотеки: (5 + 7) = " << add(5, 7) << std::endl;

    return 0;
}
