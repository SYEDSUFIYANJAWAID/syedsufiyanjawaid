#include <stdio.h>
#include <ctype.h> // For tolower function
#include <string.h> // For strlen function

// Function to convert a string to lowercase
void stringToLower(char *str) {
    int length = strlen(str);

    // Iterate through each character in the string
    for (int i = 0; i < length; ++i) {
        // Convert character to lowercase
        str[i] = tolower(str[i]);
    }
}

int main() {
    char str[100];

    // Input string from user
    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);

    // Remove newline character from fgets input
    if (str[strlen(str) - 1] == '\n') {
        str[strlen(str) - 1] = '\0';
    }

    // Convert string to lowercase
    stringToLower(str);

    // Print the lowercase string
    printf("String in lowercase: %s\n", str);

    return 0;
}









