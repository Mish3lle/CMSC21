#include <stdio.h>
#include <ctype.h> /* toupper, isalpha */
#include <stdbool.h>

void scan_word(int occurrences[26]) {
    char c;
    while ((c = getchar()) != '\n') {
        if (isalpha(c)) { // Check if the character is alphabetic.
            occurrences[toupper(c) - 'A']++; // The count for the corresponding letter will be incremented.
        }
    }
}

bool is_anagram(int occurrences1[26], int occurrences2[26]) {
    int i;
    for (i = 0; i < 26; i++) {
        if (occurrences1[i] != occurrences2[i]) { // The counts for each letter in both arrays will be compared.
            return false; // If any counts are different then the arrays are not anagrams.
        }
    }
    return true; // All counts are equal therefore the arrays are anagrams.
}

int main(void) {
    int i,
        same = 1; // The variable 'same' is not used in the code and can be removed.
    int occurrences1[26] = {0}; // Initialize an array of size 26 to store letter occurrences and all counts set to 0.
    int occurrences2[26] = {0}; // Initialize another array for the second word.

    printf("Enter first word: ");
    scan_word(occurrences1); // Call the scan_word function to read and count letters in the first word.

    printf("Enter second word: ");
    scan_word(occurrences2); // Call the scan_word function to read and count letters in the second word.

    if (is_anagram(occurrences1, occurrences2)) { // Check if the two words are anagrams.
        printf("The words are anagrams.\n");
        return 0; //
    }

    printf("The words are not anagrams.\n");
    return 0;
}
