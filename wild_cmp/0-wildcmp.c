#include <stdio.h>

int wildcmp(char *s1, char *s2) {
    // If both strings are empty, they are identical
    if (*s1 == '\0' && *s2 == '\0') {
        return 1;
    }

    // If s2 has a *, then we have two options:
    // 1. Ignore the * and move to the next character in s2
    // 2. Match the * with the current character in s1 and move to the next character in s1
    if (*s2 == '*') {
        return (wildcmp(s1, s2 + 1) || (*s1 != '\0' && wildcmp(s1 + 1, s2)));
    }

    // If the current characters of s1 and s2 match, move to the next characters
    if (*s1 == *s2) {
        return wildcmp(s1 + 1, s2 + 1);
    }

    // If none of the above conditions are met, the strings are not identical
    return 0;
}
