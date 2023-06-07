#include <stdio.h>

int main() {
    int days, first_day, day, i;

// Prompt the user to enter number of days in month and first day of week
    printf("Enter the number of days in the desired month: ");
    scanf("%d", &days);

    printf("Enter the first day of the week (1=Sun, 7=Sat): ");
    scanf("%d", &first_day);

// Check if the input values are valid
    if (days < 28 || days > 31) {
        printf("Error: Invalid number of days in month\n");
        return 1;
    }
    if (first_day < 1 || first_day > 7) {
        printf("Error: Invalid first day of week\n");
        return 1;
    }

// Print the calendar header
    printf("\nSun  Mon  Tue  Wed  Thu  Fri  Sat\n");

// Print blank spaces for days before the first day
    for (i = 1; i < first_day; i++) {
        printf("     ");
    }

// Print the days of the month
    for (day = 1; day <= days; day++) {
        printf("%-5d", day);
// If the current day is the last day of the week, start a new line
        if ((day + first_day - 1) % 7 == 0) {
            printf("\n");
        }
    }

    printf("\n");
    return 0;
}
