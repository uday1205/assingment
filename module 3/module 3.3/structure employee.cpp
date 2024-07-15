#include <stdio.h>
#include <string.h>

// Define the structure for Employee
struct Employee {
    int empno;
    char empname[50];
    char address[100];
    int age;
};

// Function to input employee details
void inputEmployee(struct Employee *emp) {
    printf("Enter employee number: ");
    scanf("%d", &emp->empno);
    getchar(); // Consume newline character left by scanf

    printf("Enter employee name: ");
    fgets(emp->empname, sizeof(emp->empname), stdin);
    // Remove newline if present
    size_t len = strlen(emp->empname);
    if (emp->empname[len - 1] == '\n') {
        emp->empname[len - 1] = '\0';
    }

    printf("Enter employee address: ");
    fgets(emp->address, sizeof(emp->address), stdin);
    // Remove newline if present
    len = strlen(emp->address);
    if (emp->address[len - 1] == '\n') {
        emp->address[len - 1] = '\0';
    }

    printf("Enter employee age: ");
    scanf("%d", &emp->age);
}

// Function to display employee details
void displayEmployee(const struct Employee *emp) {
    printf("\nEmployee Details\n");
    printf("Employee Number: %d\n", emp->empno);
    printf("Employee Name: %s\n", emp->empname);
    printf("Address: %s\n", emp->address);
    printf("Age: %d\n", emp->age);
}

int main() {
    struct Employee emp;

    // Input employee details
    inputEmployee(&emp);

    // Display employee details
    displayEmployee(&emp);

    return 0;
}

