#include <stdio.h>
#include <stdint.h>


const char* fizz = "Fizz";
const char* Buzz = "Buzz";
const char* Fizzbuzz = "FizzBuzz";
const char* num = "%d";

void fizzbuzz(const int N) {
    for (uint8_t i = 1; i <= N; i++) {
        const char* str = 
        (i % 15) ? Fizzbuzz :
        (i % 5) ? Buzz :
        (i % 3) ? fizz :
        num;
        printf(str, i);
    }
}

int main(){
    fizzbuzz(100);

    return 0;
}