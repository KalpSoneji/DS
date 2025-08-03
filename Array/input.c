#include <stdio.h>
#define SIZE 5

int a[SIZE], i;

void scanData() {

        for (i = 0; i < SIZE; i++) {
            printf("Enter a[%d]: ", i);
            scanf("%d", &a[i]);
        }

}

void printData(){

    for (i = 0; i < SIZE; i++) 
        printf("%d\t", a[i]);

}

int main(){

    scanData();
    printData();
    
}