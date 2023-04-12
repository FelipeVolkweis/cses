#include <iostream>

long long int return_number(long long int num) {
    if (num % 2 == 0) {
        return num / 2;
    } else {
        return num * 3 + 1;
    }
}

int main() {
    long long int input;
    std::cin >> input;

    std::cout << input << " ";

    while(input != 1) {
        input = return_number(input);
        std::cout << input << " ";
    }
    std::cout << "\n";
    return 0;
}

