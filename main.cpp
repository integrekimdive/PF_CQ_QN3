#include <iostream>

using namespace std;
int sum_from_to(int first, int last) {//my function
    return (last - first + 1) * (first + last) / 2;//return result
}

int main() {//main code
    int first, last;//declaration of var

    std::cout << "Enter the first integer: ";
    std::cin >> first;

    std::cout << "Enter the last integer: ";
    std::cin >> last;

    std::cout << "The sum is: " << sum_from_to(first, last) << std::endl;

    return 0;
}
