#include <stdio.h>
#include <string.h>

// Function to reverse a string using recursion
void reverseString(char str[], int start, int end) {
    // Swap the characters at the start and end indices if start is less than end
    if (start < end) {
        char temp = str[start];
        str[start] = str[end];
        str[end] = temp;

        // Recursive call to reverse the rest of the string
        reverseString(str, start + 1, end - 1);
    }
}

int main() {
    char str[100];
    printf("Enter a string: ");
    scanf("%s", str);
    
    // Calculate the length of the string
    int len = strlen(str);
    
    // Call the reverse function
    reverseString(str, 0, len - 1);
    
    printf("Reversed string: %s\n", str);
    return 0;
}

