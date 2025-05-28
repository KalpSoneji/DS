#include <stdio.h>
#define SIZE 5

int arr[SIZE] = {10, 20, 30, 40, 50};

int LinearSearch(int find) {
    
    for (int i = 0; i < SIZE; i++) {
        if (arr[i] == find)
            return i;

        if (arr[i] < find && (i + 1 == SIZE || find < arr[i + 1]))
            return -(i + 2); 
        
    }
    return -(SIZE + 1); 
}

int main() {

    int find;
    
    printf("Enter the element to search: ");
    scanf("%d", &find);

    int result = LinearSearch(find);

    if (result >= 0) 
        printf("Element found at index: %d\n", result);
    
    else 
        printf("-%d\n", -result - 1);

    return 0;
}