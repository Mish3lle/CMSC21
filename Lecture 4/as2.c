#include <stdio.h>

int main() {
    int i = 20;

// while loop
    while (i < 10) {
        printf("This code will not execute.\n");
    }

// for loop
    for (; i < 10;) {
        printf("This code will not execute.\n");
    }

// do-while loop
    do {
        printf("This code will execute at least once.\n");
    } while (i < 10);

    return 0;
}
