#include <stdio.h>

int main(void) {
    int i;

    for (i = 1; i <= 128; i *= 2) {
        printf("%d ", i);
    }

    return 0;
}

/* as1 output = as3 output:

1 2 4 8 16 32 64 128

*/
