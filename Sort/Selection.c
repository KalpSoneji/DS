#include <stdio.h>
#define SIZE 5

int arr[SIZE] = {5, 4, 3, 2, 1};

void printArr(){

    for(int i = 0; i < SIZE; i++)
        printf("%d\t", arr[i]);
    printf("\n\n");

}

void selectionSort(){

    int i, j, min, temp;

    
    for (i = 0; i < SIZE; i++) {
        
        min = i;

        for(j = i + 1; j < SIZE; j++){

            if (arr[min] > arr[j])
                min = j;

            temp = arr[min];
            arr[min] = arr[i];
            arr[i] = temp;

        }
    }
    

}

int main(){

    printf("Before sorting: \n");
    printArr();
    selectionSort();
    printf("After sorting: \n");
    printArr();

}

