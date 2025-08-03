#include <stdio.h>
#define SIZE 5

int a[SIZE];
int i, j, temp, pass = 0;

void scanData(){
    for (i = 0; i < SIZE; i++) {
        printf("Enter a[%d]: ", i+1);
        scanf("%d", &a[i]);
    }
}

void sortData(){

    for (i = 0; i < SIZE - 1; i++) 
        for (j = i + 1; j < SIZE; j++) 
            if (a[i] > a[j]){
                temp = a[i];
                a[i] = a[j];
                a[j] = temp;
                pass++;
            }
}

void printData(){
    
    for (i = 0; i < SIZE; i++) 
        printf("%d\t", a[i]);

}

int main(){

    scanData();
    printf("Unsorted data:\n");
    printData();
    
    printf("\nSorting data...\n");
    fflush(stdout);
    
    printf("Sorted data:\n");
    sortData();
    printData();

    printf("\n\nNo. of passes: %d\n", pass);

    return 0;

}