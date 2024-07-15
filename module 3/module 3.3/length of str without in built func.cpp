#include <stdio.h>

// Function to calculate length of string
int stringLength(char str[]) {
    int length = 0;
    
    // Iterate until null character is encountered
    while (str[length] != '\0') {
        length++;
    }
    
    return length;
}

int main() {
    char str[100]; // Assuming maximum input length is 99 characters
    
    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin); // Read string input from user
    
    // Replace newline character at the end of input with null terminator
    str[stringLength(str) - 1] = '\0';
    
    // Calculate length of string
    int length = stringLength(str);
    
    printf("Length of the string '%s' is: %d\n", str, length);
    
    return 0;
}

