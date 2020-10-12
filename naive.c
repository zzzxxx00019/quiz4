#include <stdio.h>
int main() {
    for (unsigned int i = 1; i < 1000000; i++) {
        if (i % 3 == 0) printf("Fizz");
        if (i % 5 == 0) printf("Buzz");
        if (i % 15 == 0) printf("FizzBuzz");
        if ((i % 3) && (i % 5)) printf("%u", i);
        printf("\n");
    }
    return 0;
}
