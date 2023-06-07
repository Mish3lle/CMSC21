#include <stdio.h>

int main()
{
    // Declare variables
    int num1, denom1, num2, denom2, result_num, result_denom;

    // Prompting the user to enter the first fraction
    printf("Enter first fraction: ");
    scanf("%d/%d", &num1, &denom1);

    // Prompting the user to enter the second fraction
    printf("Enter second fraction: ");
    scanf("%d/%d", &num2, &denom2);

    // Calculating the sum of the fractions
    result_num = num1 * denom2 + num2 * denom1;
    result_denom = denom1 * denom2;

    // Displaying the result of the addition
    printf("The sum is %d/%d\n", result_num, result_denom);

    return 0;
}
