#include <stdio.h>

int main() {
    char str[50], rev[50];
    int i, j = 0;

    // Input string
    printf("Enter a string: ");
    scanf("%s", str);

    // Find length and reverse
    for (i = 0; str[i] != '\0'; i++);
    for (i = i - 1; i >= 0; i--) {
        rev[j] = str[i];
        j++;
    }
    rev[j] = '\0';

    // Output reversed string
    printf("Reversed string: %s", rev);

    return 0;
}
