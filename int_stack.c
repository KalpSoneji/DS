#include <stdio.h>
#include <stdlib.h>
#define SIZE 5

int stack[SIZE];
int top = -1;

// void push(int num){
    
//     if(top == SIZE - 1)
//         printf("Overflow!");

//     else{
//         top++;
//         stack[top] = num;
//     }
// }

int push(int num){
    
    if(top == SIZE - 1){
        printf("Overflow!\n");
        return -1;
    }
    
    else{
        top++;
        stack[top] = num;
        return num;
    }
}

int pop(){
    
    if(top == -1){
        printf("Underflow!\n");
        return -1;
    }
    
    else
        return stack[top--];
}

void display(){
    
    int i;

    // if(top == -1)
    //     printf("Stack is empty.\n");
    
    for(i = top; i >= 0; i--)
        printf("%d\n", stack[i]);
    
}

int main(){
    
    int num;
    int choice;

    while(1){
        printf("1. Push\t2. Pop\t3. Display\t4. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice){
            case 1:
                printf("Enter a number: ");
                scanf("%d", &num);
                push(num);
                break;
            
            case 2:
                pop();
                break;

            case 3:
                display();
                break;

            case 4:
                printf("Exiting...");
                exit(0);
            default:
                printf("Invalid choice!\n");
                break;
        }//switch
    }//while
}