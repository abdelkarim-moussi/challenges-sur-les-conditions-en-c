// C program for generating a
// random number in a given range.
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

// Generates and prints 'count' random
// numbers in range [min, max].
void printRandoms(int min, int max, int count) {
    printf("Random numbers between %d and %d are: ", min, max);
    srand(time(0));
    // Loop that will print the count random numbers
    for (int i = 0; i < count; i++) {

        // Find the random number in the range [min, max]
        int rd_num = rand() % (max - min + 1) + min;
        printf("%d", rd_num);
    }
}

int main() {
    int min = 5, max = 7, count = 10, randnum;
    printRandoms(min, max, count);
    return 0;
}