#include <stdio.h>

int main (void)
{
    // Declare variables
    int i;
    float x;

    // Assign values to variables
    i = 40;
    x = 839.21f;

    // Print formatted output for 'i'
    printf("|%d|%5d|%-5d|%5.3d|\n", i, i, i, i);

    // Print formatted output for 'x'
    printf("|%10.3f|%10.3e|%-10g|\n", x, x, x);

    return 0;
}
