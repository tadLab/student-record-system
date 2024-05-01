#include <stdio.h>
#include <string.h>
#include <stdlib.h>

char* interface();
void help();
void addStudent();
void displayDetails();
void updateStudent();
void deleteRecord();
void error();

void addStudent() {
}

void displayDetails() {
}

void updateStudent() {
}

void deleteRecord() {
}

void error() {
    printf("Invalid command! Please try again or use 'help' for assistance.\n");
}

int main() {
    char command[10];

    printf("               *RECORD BOOK*\n");
    printf("*USE COMMAND -HELP TO LEARN ABOUT THIS PROGRAM*\n");

    while (1) {
        printf("Enter command: ");
        scanf("%9s", command);

        if (strcmp(command, "help") == 0) {
            help();
        }
        else if (strcmp(command, "add") == 0) {
            addStudent();
        }
        else if (strcmp(command, "display") == 0) {
            displayDetails();
        }
        else if (strcmp(command, "update") == 0) {
            updateStudent();
        }
        else if (strcmp(command, "remove") == 0) {
            deleteRecord();
        }
        else if (strcmp(command, "exit") == 0) {
            break;
        }
        else {
            error(); 
        }
    }

    printf("Exiting program.\n");
    return 0;
}

void help() {
    printf("*THIS IS HELP*\n");
    printf("THESE ARE THE COMMANDS YOU CAN USE:\n");
    printf("- add: For adding a new student and details.\n");
    printf("- display: For displaying the whole student record book.\n");
    printf("- update: For updating one of the students' records.\n");
    printf("- remove: For deleting the record of one student.\n");
    printf("- help: To display this help message.\n");
    printf("- exit: To exit the program.\n");
}