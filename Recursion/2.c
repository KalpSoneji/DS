#include <stdio.h>

int pattern (int start, int end){

    if (start > end)
        return 0;
    
    if (start % 2 == 1)
        printf("%d ", start);

    pattern(start + 1, end);

    return 0;

}

int main(){

    int start, end;

    printf("Enter the start and end values: ");
    scanf("%d %d", &start, &end);

    printf("Odd numbers between %d and %d are: ", start, end);
    pattern(start, end);
    printf("\n");

    return 0;

}