#include <iostream>
// #include <stdio.h>

void fizzbuzz(const int N) {
    int i;
    for (i = 1; i <= N; i++)
    {
        if (i%3 == 0)
            std::cout << "Fizz";
        if (i%5 == 0)
            std::cout << "Buzz";
        if ((i%3 != 0) && (i%5 != 0))
            std::cout << i;
        std::cout <<  "\n";
    }
    
}


int main() {
    fizzbuzz(100);

    return 0;
}