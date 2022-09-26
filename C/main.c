#include <stdio.h>

void fizzbuzz1(const int N) {
    int i;
    for (i = 1; i <= N; i++)
    {
        if (i%3 == 0)
            printf("FIzz");
        if (i%5 == 0)
            printf("Buzz");
        if ((i%3 != 0) && (i%5 != 0))
            printf("%d", i);
        printf("\n");
    }
    
}


// void fizzbuzz2(const int N){
//     for (int i=1; i<=N; i++){
//         if(i % 5 == 0 && i % 3 == 0){
//             printf("FizzBuzz\n");
//         }
//         else if (i % 5 == 0){
//             printf("Buzz\n");
//         }
//         else if (i % 3 ==  0){
//             printf("Fizz\n");
//         }
//         else {
//             printf("%d\n", i);
//         }
        
//     }
// }
 

int main(void){
    fizzbuzz1(100);

    return 0;
}