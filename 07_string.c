#include <stdio.h>
#include <string.h>
#include <ctype.h>

#define SIZE 200

int countVowels(const char s[]) {
    int i, count = 0;
    for (i = 0; s[i] != '\0'; i++) {
        char c = (char)tolower((unsigned char)s[i]);
        if (c == 'a' || c == 'e' || c == 'i' ||
            c == 'o' || c == 'u') count++;
    }
    return count;
}

void reverseString(char s[]) {
    int left = 0, right = (int)strlen(s) - 1;
    while (left < right) {
        char temp = s[left];
        s[left] = s[right];
        s[right] = temp;
        left++;
        right--;
    }
}

int isPalindrome(const char s[]) {
    int left = 0, right = (int)strlen(s) - 1;
    while (left < right) {
        if (tolower((unsigned char)s[left]) !=
            tolower((unsigned char)s[right])) return 0;
        left++;
        right--;
    }
    return 1;
}

int main(void) {
    char s[SIZE];

    // Read a full line, including spaces. Remove newline if present.
    if (fgets(s, sizeof(s), stdin) == NULL) return 1;
    s[strcspn(s, "\n")] = '\0';

    printf("Length = %zu\n", strlen(s));
    printf("Vowel count = %d\n", countVowels(s));
    printf("Palindrome (case-insensitive) = %s\n",
           isPalindrome(s) ? "Yes" : "No");

    reverseString(s);
    printf("Reversed = %s\n", s);
    return 0;
}
