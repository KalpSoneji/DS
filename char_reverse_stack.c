#include <stdio.h>
#include <stdlib.h>
#define SIZE 5

char stack[SIZE];
int top = -1;

int push(char data) {
    if (top == SIZE - 1) {
        printf("Overflow!\n");
        return -1;
    } 
    stack[++top] = data;
    return data;
}

char pop() {
    if (top == -1) {
        printf("Underflow!\n");
        return -1;
    }
    return stack[top--];
}

void display() {
    if (top == -1) {
        printf("Stack is empty.\n");
        return;
    }
    for (int i = top; i >= 0; i--) {
        printf("%c", stack[i]);
    }
    printf("\n");
}

int main() {
    char data[SIZE + 1];  // +1 for null terminator
    int choice;
    int i;

    while (1) {
        printf("1. Push\t2. Pop\t3. Display\t4. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);
        getchar(); // Consume the newline character after the integer input

        switch (choice) {
            case 1:
                printf("Enter a string (max %d characters): ", SIZE);
                fgets(data, SIZE + 1, stdin);

                for (i = 0; data[i] != '\0' && data[i] != '\n'; i++) {
                    push(data[i]);
                }
                break;

            case 2:
                pop();
                break;

            case 3:
                display();
                break;

            case 4:
                printf("Exiting...\n");
                exit(0);

            default:
                printf("Invalid choice!\n");
                break;
        }
    }
}