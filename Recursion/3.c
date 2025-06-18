#include <stdio.h>
#include <stdlib.h>

int a[5];

void scanData(int i){

    if (i > 4)
        return;

    printf("Enter a number: ");
    scanf("%d", &a[i]);

    scanData(i + 1);
    
}

void dispData(int i){

    if (i > 4)
        return;

    printf("%d ", a[i]);

    dispData(i + 1);

}

int main(){

    scanData(0);

    printf("\n");

    dispData(0);
    
    return 0;

}