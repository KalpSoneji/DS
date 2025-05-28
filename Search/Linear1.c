#include <stdio.h>
#define SIZE 5
int arr[SIZE] = {1, 2, 3, 4, 5};

int LinearSearch(int find){

    for(int i = 0; i < SIZE; i++)
        if(arr[i] == find)
            return i;
        
    return -1; 
}

int main(){

    int find;

    printf("Enter the element to search: ");
    scanf("%d", &find);

    int result = LinearSearch(find);

    if(result != -1)
        printf("Element found at index: %d\n", result);
    else
        printf("Element not found in the array.\n");

    return 0;

}

// Either make the array global or pass it as a argument to the function