/*
Common Interwiev Task: "FizzBuzz"
NikolaLaskowska 2019
*/

#include <iostream>

int main()
{
    int i=1;
    for (i; i <= 100; i++) {
        if ((i % 3 == 0) && (i % 5 == 0)) {
            std::cout << "FizzBuzz";
        }
        else if (i % 3 == 0) {
            std::cout << "Fizz";
        }
        else if (i % 5 == 0) {
            std::cout << "Buzz";
        }
        else {
            std::cout << i;
        }
        std::cout << "\n";
    }
    return 0;
}
