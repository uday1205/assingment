#include <stdio.h>
#include <string.h>
#include <stdbool.h>

// Function to reverse a string
void reverseString(char str[]) {
    int length = strlen(str);
    int start = 0;
    int end = length - 1;
    
    while (start < end) {
        // Swap characters at start and end indices
        char temp = str[start];
        str[start] = str[end];
        str[end] = temp;
        
        // Move towards the center
        start++;
        end--;
    }
}

// Function to check if a string is palindrome
bool isPalindrome(char str[]) {
    int start = 0;
    int end = strlen(str) - 1;
    
    while (start < end) {
        if (str[start] != str[end]) {
            return false; // Not a palindrome
        }
        start++;
        end--;
    }
    
    return true; // It is a palindrome
}

int main() {
    char str[100]; // Assuming maximum input length is 99 characters
    
    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin); // Read string input from user
    
    // Replace newline character at the end of input with null terminator
    str[strcspn(str, "\n")] = '\0';
    
    // Create a copy of the original string
    char original[100];
    strcpy(original, str);
    
    // Reverse the string
    reverseString(str);
    
    // Check if the original and reversed strings are identical
    if (strcmp(original, str) == 0) {
        printf("The string '%s' is a palindrome.\n", original);
    } else {
        printf("The string '%s' is not a palindrome.\n", original);
    }
    
    return 0;
}

