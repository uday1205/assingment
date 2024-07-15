#include <stdio.h>
#include <string.h>

// Define the structure for Employee
struct Employee {
    int empno;
    char empname[50];
    char address[100];
    int age;
};

int main() {
    struct Employee employees[5]; // Array of 5 Employee structures

    // Input details for each employee
    for (int i = 0; i < 5; i++) {
        printf("\nEnter details for employee %d:\n", i + 1);

        // Employee Number
        printf("Enter employee number: ");
        scanf("%d", &employees[i].empno);
        getchar(); // Consume newline character left by scanf

        // Employee Name
        printf("Enter employee name: ");
        fgets(employees[i].empname, sizeof(employees[i].empname), stdin);
        // Remove newline if present
        if (employees[i].empname[strlen(employees[i].empname) - 1] == '\n') {
            employees[i].empname[strlen(employees[i].empname) - 1] = '\0';
        }

        // Employee Address
        printf("Enter employee address: ");
        fgets(employees[i].address, sizeof(employees[i].address), stdin);
        // Remove newline if present
        if (employees[i].address[strlen(employees[i].address) - 1] == '\n') {
            employees[i].address[strlen(employees[i].address) - 1] = '\0';
        }

        // Employee Age
        printf("Enter employee age: ");
        scanf("%d", &employees[i].age);
        getchar(); // Consume newline character left by scanf
    }

    // Display details for each employee
    printf("\nEmployee Details:\n");
    for (int i = 0; i < 5; i++) {
        printf("\nEmployee %d\n", i + 1);
        printf("Employee Number: %d\n", employees[i].empno);
        printf("Employee Name: %s\n", employees[i].empname);
        printf("Address: %s\n", employees[i].address);
        printf("Age: %d\n", employees[i].age);
    }

    return 0;
}

