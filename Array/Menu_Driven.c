#include <stdio.h>
#include <stdlib.h>
#define SIZE 5

int a[SIZE];

void inputArray(int location, int value) {

    int index = location - 1;

    if (a[index] == 0) 
        a[index] = value;
    
    else {
        for (int i = SIZE - 1; i > index; i--) 
            a[i] = a[i - 1];
        
        a[index] = value;
    }
}

void dispArray(){
    for (int i = 0; i < SIZE; i++)
        printf("%d\t", a[i]);
}

void delElement(int del) {

    int index = del - 1;

    for (int i = index; i < SIZE - 1; i++) 
        a[i] = a[i + 1];

    a[SIZE - 1] = 0;
}

void bubbleSort() {
 
    for (int i = 0; i < SIZE - 1; i++) {
        for (int j = 0; j < SIZE - i - 1; j++) {
            if (a[j] > a[j + 1]) {
                int temp = a[j];
                a[j] = a[j + 1];
                a[j + 1] = temp;
            }
        }
    }

}

int main(){

    int choice;

    while(1){

        printf("\nEnter 0 to exit\nEnter 1 for adding element\nEnter 2 for displaying elements\nEnter 3 for deleting an element\nEnter 4 for sorting\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch(choice){
            
            case 0:
                exit(0);

            case 1:
                int location, value;
                printf("Enter location of new element and its value: ");
                scanf("%d%d", &location, &value);
                inputArray(location, value);
                break;

            case 2:
                dispArray();
                break;
                
            case 3:
                int del;
                printf("Enter location you want deleted: ");
                scanf("%d", &del);
                delElement(del);
                dispArray();
                break;    
            
            case 4:
                bubbleSort();
                dispArray();
                break;

            default:
                printf("\nInvalid option.\n");
                
        }
    }

    return 0;

}